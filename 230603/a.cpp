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
    string s[100];
    int a[100];
    int x = 0;
    cin >> n;
    rep(i,n) cin >> s[i] >> a[i];
    int min = a[0];

    rep(i,n){
        if(a[i] < min){
            x = i;
            min = a[i];
        }
    }

    for(int i = x; i < n; i++){
        cout << s[i] << endl;
    }
    
    if(x != 0){
        rep(i,x) cout << s[i] << endl;
    }
    return 0;
}
