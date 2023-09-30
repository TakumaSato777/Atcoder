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
    int tmp1[0][0];
    int tmp2[0][n-1];
    int tmp3[n-1][n-1];
    int tmp4[n-1][0];

    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }


    for (int i = 1; i < n-1; i++) {
        grid[0][i] = grid[0][i - 1];
    }
    for (int i = 1; i < n-1; i++) {
        grid[i][n-1] = grid[0][i - 1];
    }


    cout << ans << endl;
    return 0;
}