#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    string s;
    int ans = 0;
    cin >> s;
    rep(i,3){
        if(s[i] == '1') ans++;
    }

    
    cout << ans << endl;
    return 0;
}