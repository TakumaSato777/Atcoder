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
    vector<int> A(N+1),dp(N+1);
    vector<int> G[N+1];
    rep1(i,2,N+1){
        cin >> A[i];
        G[A[i]].push_back(i);
    }

    for(int i = N; i >= 1; i--){
        dp[i] = 0;
        for(int j = 0; j < G[i].size();j++) dp[i] += (dp[G[i][j]] + 1);
    }

    rep1(i,1,N+1){
        if( i >= 2) cout << " ";
        cout << dp[i];
    }

    cout << endl;

    return 0;
}