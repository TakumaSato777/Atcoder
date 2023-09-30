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
    vector<int> A(80);
    cin >> n;

    vector<int> B(n);
    int day = 7 * n;

    rep1(i, day) cin >> A[i];

    rep(i, n) {
        int wa = 0;
        rep1(j, 7) {
            wa += A[j+(7*i)];
        }
        B[i] = wa;
    }

    rep(i, n) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
