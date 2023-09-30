#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    cin >> n;
    int A[210];
    rep(i,n) cin >> A[i];
    int ans = 0;
    while(true){
        bool hantei = false;
        rep(i,n){
            if(A[i] % 2 != 0) hantei = true;
        }
        if(hantei) break;
        rep(i,n){
            A[i] /= 2;
        }
        ++ans;
    }
    cout << ans << endl;
}