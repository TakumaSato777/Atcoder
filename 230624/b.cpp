#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    int ans = 0;
    cin >> n;
    string s[110];
    string x;
    string gyaku;
    rep(i,n) cin >> s[i];

    bool hantei = false;

    rep(i,n){
        rep(j,n){
            if(i != j){///同じ文字ではない///
                x = s[i] + s[j];
                gyaku = x;
                reverse(gyaku.begin(),gyaku.end());
                if(x == gyaku) hantei = true;
            }   
        }
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}