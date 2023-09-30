#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;
ll ans = 0;

int main() {
    cin >> N;
    vector<int> A(N+1);
    vector<ll> cnt(101,0);
    rep1(i,1,N+1) cin >> A[i];
    rep1(i,1,N+1) cnt[A[i]] += 1;

    rep1(i,1,101) ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) /6;

    cout << ans << endl;

    return 0;
}