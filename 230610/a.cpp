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

    int x = n % 5;

    if(x < 3) ans = n-x;
    else ans = n + (5-x);

    cout << ans << endl;
    return 0;
}