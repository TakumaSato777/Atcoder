#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,M;
int A[109][19];
int dp[109][1024];

int main() {
    cin >> N >> M;
    ///vector<vector<int>> A(M,vector<int>(N));
    ////vector<vector<int>> dp(M,vector<int>(1024));
    
    rep1(i,M){
        rep1(j,N) cin >> A[i][j];
    }

    for(int i = 0; i <= M; i++){
        for(int j = 0; j < (1 << N);j++) dp[i][j] = 1'000'000'000;
    }

    dp[0][0] = 0;
    for(int i= 1;i <= M; i++){
        for(int j = 0;j<(1 << N);j++){
            int already[19];
            for(int k = 1; k < N;k++){
                if((j / (1 << (k-1))) % 2 == 0)already[k] = 0;
                else already[k] = 1;
            }

            int v = 0;
            for(int k=1;k<= N; k++){
                if(already[k] == 1 || A[i][k] == 1) v += (1 << (k-1));
             }

             dp[i][j] = min(dp[i][j],dp[i-1][j]);
             dp[i][v] = min(dp[i][v],dp[i-1][j]+1);
        }
    }

    if(dp[M][(1 << N) - 1] == 1'000'000'000) cout << "-1" << endl;
    else cout <<dp[M][(1 << N) - 1] << endl;

    return 0;
}