#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n,a,b,x;
    int c[2010];
    cin >> n >> a >> b;
    rep1(i,n) cin >> c[i];
    int ans = 0;
    x = a + b;

    rep1(i,n){
        if(x == c[i]) ans = i;
    }

    cout << ans << endl;
    return 0;
}