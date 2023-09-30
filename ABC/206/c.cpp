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
    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    sort(A.begin(),A.end());
    A.push_back(-1);
    ll res1 = (N*(N-1)/2);

    ll  cnt = 1;
    rep(i,N){
        if(A[i] != A[i+1]){
            res1 -= ((cnt*(cnt-1))/2);
            cnt = 1;
        }else{
            cnt++;
        }
    }

    cout << res1 << endl;

    return 0;
}