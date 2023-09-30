#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n,A,B;
    int x,wa;
    int ans = 0;
    cin >> n >> A >> B;
    rep1(i,n){
        x = i;
        wa = 0;
        while(x > 0){
            wa += x % 10;
            x /= 10;
        }
        if(wa >= A and wa <= B){
            ans += i;
        }
    }

    cout << ans << endl;
    return 0;
}