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
    vector<int> C(2001,1);
    vector<int> dp(2001);
    vector<int> A(2001),B(2001);

    rep1(i,1,M+1){
        cin >> A[i] >> B[i];
    }

    dp[0] = N;
    rep1(i,1,M+1){
        dp[i] = dp[i-1] + C[B[i]];
        C[B[i]]++;
    }
    
    cout << dp[M] << endl;

    return 0;
}