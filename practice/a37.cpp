#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

ll N,M,B,a,c;

int main() {
    cin >> N >> M >> B;
    vector<ll> A(N),C(M);
    
    ll ans = 0;

    rep(i,N){
        cin >> a;
        ans += a*M;
    }
    rep(i,M){
        cin >> c;
        ans += c*N;
    }
    
    ans += B*(N*M);

    cout << ans << endl;
    return 0;
}
