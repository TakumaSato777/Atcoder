#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
#include <map>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,P;

int main() {
    cin >> N >> P;
    vector<int> a(N);
    rep(i,N) cin >> a[i];

    sort(a.begin(),a.end());
    int ans = lower_bound(a.begin(),a.end(),P) - a.begin();

    cout << ans << endl;

    return 0;
}