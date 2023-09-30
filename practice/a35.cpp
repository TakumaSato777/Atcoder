#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;

int main() {
    cin >> N;
    vector<int> A(N+1);
    vector<vector<int>> dp(N+1,vector<int>(N+1));
    rep1(i,1,N+1) cin >> A[i];

    rep1(j,1,N+1) dp[N][j] = A[j];

    for(int i = N - 1; i>= 1;i--){
        for(int j = 1; j <= i; j++){
            if(i%2 == 1) dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]);
            if(i%2 == 0) dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]);
        }
    }

    cout << dp[1][1] << endl;

    return 0;
}