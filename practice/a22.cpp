#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
 
int N;
 
int main() {
    cin >> N;
    vector<int> A(N),B(N),dp(N);
    
    for(int i = 1; i < N; i++) cin >> A[i]; 
    for(int i = 1; i < N; i++) cin >> B[i];
 
    for(int i = 2; i <= N; i++) dp[i] = -1000000000;
    dp[1] = 0;
 
    for(int i = 1; i < N; i++){
        dp[A[i]] = max(dp[A[i]],dp[i] + 100);
        dp[B[i]] = max(dp[B[i]],dp[i] + 150);
    }
 
    cout << dp[N] << endl;
 
    return 0;
}