#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,M;
string S;
vector<int> C(200001);
vector<int> p[200001];

int main() {
    cin >> N >> M;
    cin >> S;
    rep(i,N) cin >> C[i];
    rep(i,N) p[C[i]].push_back(i);

    string t = S;
    rep1(i,1,M+1){
        int k = p[i].size();
        rep(j,k) t[p[i][(j+1)%k]] = S[p[i][j]];
    }

    cout << t << endl;

    return 0;
}