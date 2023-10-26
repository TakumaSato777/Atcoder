#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
#include <map>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;

int main() {
    cin >> N;
    vector<string> S(N);
    vector<int> T(N);
    map<string,int> map;
    rep(i,N) cin >> S[i] >> T[i];
    int M = 0;
    int num = 0;
    rep(i,N){
        if(map[S[i]] == 0){
            map[S[i]] = T[i];
            if(M < T[i]){
                M = T[i];
                num = i+1;
            }
        }
    }
    cout << num << endl;

    return 0;
}