#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
#include <map>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

ll N,a,b,c;
map<ll,ll> mapA,mapB;

int main() {
    cin >> N;
    vector<ll> A(N+1),B(N+1),C(N+1);
    rep1(i,1,N+1){
        cin >> A[i];
        mapA[A[i]]++;     
    } 
    rep1(i,1,N+1){
        cin >> B[i];     
    }
    rep1(i,1,N+1){
        cin >> C[i];
    }

    ll ans = 0;
    rep1(i,1,N+1){
        if(mapA[B[C[i]]] >= 1)
        ans += mapA[B[C[i]]];
    }

    cout << ans << endl;

    return 0;
}