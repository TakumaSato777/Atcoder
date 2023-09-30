#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    int a[110];
    int ans = 0;
    cin >> n;
    rep(i,n) cin >> a[i];
    sort(a,a + n,greater<int>());
    int Alice = 0;
    int Bob = 0;
    rep(i,n){
        if(i % 2 == 0) Alice += a[i];
        else Bob += a[i];
    }
    ans = Alice - Bob;


    cout << ans << endl;
    return 0;
}