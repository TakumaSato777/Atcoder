#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N;
int LEN = 0;

int main() {
    cin >> N;
    vector<int> A(N+1),dp(N+1),L(N+1);
    rep1(i,N) cin >> A[i];

    rep1(i,N){
        int pos = lower_bound(L.begin() + 1 ,L.begin() +LEN+1,A[i]) - L.begin();
        dp[i] = pos;

        L[dp[i]] = A[i];
        if(dp[i] > LEN) LEN += 1;
    }

    cout << LEN << endl;

    return 0;
}