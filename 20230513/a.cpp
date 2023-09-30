#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int taka = 0;
    int aoki = 0;

    rep(i,n){
        if(s[i] == 'T') taka++;
        else aoki++;
    }

    if(taka == aoki){
        if(s[n-1] == 'T') cout << 'A' << endl;
        else cout << 'T' << endl;
    }
    else if(taka > aoki){
        cout << 'T' << endl;
    }
    else cout << 'A' << endl;
}