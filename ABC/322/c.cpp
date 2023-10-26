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

int N,M;

int main() {
    cin >> N >> M;
    vector<int> A(M);
    vector<int> dp(N+1);
    rep(i,M) cin >> A[i];
    int pre = 0;
    
    rep(j,M){
        rep1(i,pre+1,A[j]+1){
            dp[i] = A[j];
        }
        pre = A[j];
    }

    rep1(i,1,N+1){
        cout << dp[i] - i << endl;
    }

    return 0;
}