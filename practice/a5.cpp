#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n,k;
    int ans = 0;
    cin >> n >> k;
    rep1(i,n){
        rep1(j,n){
            int z = k-i-j;
            if(z >= 1 && z <= n) ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}