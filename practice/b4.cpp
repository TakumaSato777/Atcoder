#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    string n;
    int ans = 0;
    cin >> n;
    int len = n.size();

    rep(i,len){
        int number = n[i] - '0';
        int kake = (1 << len - 1 - i);
        ans += (number * kake);
    }

    cout << ans << endl;
    return 0;
}