#include <iostream>
#include <vector>

using namespace std;

bool rotateMatrix(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size();
    // 回転前と回転後で要素が一致するかを調べる
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    // 行列を90度回転する
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = A[i][j];
            A[i][j] = A[n - j - 1][i];
            A[n - j - 1][i] = A[n - i - 1][n - j - 1];
            A[n - i - 1][n - j - 1] = A[j][n - i - 1];
            A[j][n - i - 1] = temp;
        }
    }
    // 回転後の行列と B が一致するかを調べる
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    // 行列 A を入力する
    vector<vector<int>> A(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    // 行列 B を入力する
    vector<vector<int>> B(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    // A を回転して B と一致するかを調べる
    bool result = false;
    for (int i = 0; i < 4; i++) {
        result = rotateMatrix(A, B);
        if (result) {
            break;
        }
    }
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
