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
    string s;
    cin >> n >> s;
    rep(i,n) cout << s[i] << s[i];
    cout << endl;
    return 0;
}