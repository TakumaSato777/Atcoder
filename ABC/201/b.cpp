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

int N;

int main() {
    cin >> N;
    vector<string> S(N);
    vector<int> T(N);
    vector<pair<int,string>> P;

    rep(i,N){
        cin >> S[i] >> T[i];
        P.push_back(make_pair(T[i],S[i]));
    }
    sort(P.begin(),P.end());
    cout << P[N-2].second << endl;

    return 0;
}