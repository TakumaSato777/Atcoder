#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n,x;
    cin >> n >> x;
    bool hantei = false;

    rep(i,n){
        int a;
        cin >> a;
        if(x == a) hantei = true;
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}