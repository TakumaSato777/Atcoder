#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;

int main() {
    cin >> N;
    vector<int> A(N);
    vector<ll> B(200,0);

    rep(i,N){
        cin >> A[i];
        B[A[i]%200] += 1;
    }
    
    ll ans = 0;

    rep(i,200) ans += (B[i]*(B[i]-1)) / 2;

    cout << ans << endl;
    
    return 0;
}