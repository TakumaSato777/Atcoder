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

ll N,D,P,K;

int main() {
    cin >> N >> D >> P;

    vector<ll> F(N);
    rep(i,N) cin >> F[i];

    sort(F.begin(),F.end());
    vector<ll> dp(N);
    dp[0] = F[0];
    rep1(i,0,N-1){
        dp[i+1] = dp[i] + F[i+1];
    }

    K = (N+D-1)/D;
    ll ans = P*K;
    rep(i,K){
        ans = min(ans,dp[N-1-(i*D)]+(P*i));
    }

    cout << ans << endl;

    return 0;
}