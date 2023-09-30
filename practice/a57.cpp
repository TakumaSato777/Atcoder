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
vector<int> A(100009),X(100009),Y(100009);
vector<vector<int>> dp(32,vector<int>(100009)); 

int main() {
    cin >> N >> Q;
    rep1(i,1,N+1)cin >> A[i];
    rep1(i,1,Q+1)cin >> X[i] >> Y[i];

    rep1(i,1,N+1)dp[0][i] = A[i];
    rep1(d,1,30){
        rep1(i,1,N+1)dp[d][i] = dp[d-1][dp[d-1][i]];
    }

    rep1(i,1,Q+1){
        int current = X[i];
        for(int d = 29; d >= 0; d--){
            if((Y[i] / (1 << d)) % 2 != 0) current = dp[d][current];
        }
        cout << current << endl;
    }
    return 0;
}