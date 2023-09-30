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

int N;

int main() {
    cin >> N;
    vector<int> A(N),B(N);
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> B[i];

    sort(A.begin(),A.end());
    sort(B.rbegin(),B.rend());

    int ans = 0;

    rep(i,N) ans += A[i] * B[i];

    cout << ans << endl;

    return 0;
}