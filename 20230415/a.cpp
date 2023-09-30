#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    string s;
    int n;
    cin >> n >> s;

    int maru = 0;
    bool hantei = false;

    rep(i,n){
        if (s[i] == 'o') maru += 1;
    }

    if(maru > 0){
        hantei = true;
        rep(i,n){
            if (s[i] == 'x') hantei = false;
        }
    }

    if(hantei == true) cout << "Yes" << endl;
    else cout <<"No" << endl;
    
    return 0;
}