#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,S,A[69];
bool dp[69][10009];

int main() {
    cin >> N >> S;
    rep1(i,N) cin >> A[i];

    dp[0][0] = true;
    rep1(i,S)dp[0][i] = false;

    rep1(i,N){
        for(int j = 0; j <= S; j++){
            if(j < A[i]){
                if(dp[i-1][j] == true)dp[i][j] = true;
                else dp[i][j] = false;
            }
            if(j >= A[i]){
                if(dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }
    if(dp[N][S] == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}