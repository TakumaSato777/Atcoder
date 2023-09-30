#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    int ans = 0;
    int d[110];
    cin >> n;
    rep(i,n) cin >> d[i];

    set<int> values;
    rep(i,n) values.insert(d[i]);

    cout << values.size() << endl;
    return 0;
}
