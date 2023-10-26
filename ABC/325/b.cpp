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

ll N;

int main() {
    cin >> N;
    vector <ll> W(N);
    vector<ll> X(N);
    rep(i,N) cin >> W[i] >> X[i];
    ll ans = 0;
    ll count = 0;

    rep(i,24){
        rep(j,N){
            ll time = (X[j]+i) % 24;
            if(9 <= time && time < 18){
                count += W[j];
            }
        }
        ans = max(ans,count);
        count = 0;
    }

    cout << ans << endl;

    return 0;
}
