#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,K,ans = 0;

int main() {
    cin >> N >> K;
    
    rep1(i,1,N+1){
        rep1(j,1,K+1){
            ans += (i*100 + j);
        }
    }
    cout << ans << endl;
    return 0;
}