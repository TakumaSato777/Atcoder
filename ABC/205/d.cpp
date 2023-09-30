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

int N,Q;

int main() {
    cin >> N >> Q;
    vector<ll> A(N);
    vector<ll> C(N);

    rep(i,N) cin >> A[i];

    rep(i,N){
        C[i] = A[i] - (i+1);
    }

    while(Q--){
        ll K;
        cin >> K;
        int idx = lower_bound(C.begin(),C.end(),K) - C.begin();
        if(idx == N){
            cout << A[N-1]+(K-C[N-1]) << endl;
        }else{
            cout << A[idx] - (C[idx] - K + 1) << endl;
        }
    }

    return 0;
}