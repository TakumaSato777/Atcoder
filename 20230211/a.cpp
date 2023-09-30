#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    string s;
    cin >> s;

    string ans;

    int n = s.size();
    
    rep(i,n){
        if(s[i] == '0') ans.insert(i,"1");
        else ans.insert(i,"0");
    }

    cout << ans << endl;
    return 0;
}