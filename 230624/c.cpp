#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkSheet(const vector<string>& A, const vector<string>& B, const vector<string>& X) {
    int HA = A.size();
    int WA = A[0].length();
    int HB = B.size();
    int WB = B[0].length();
    int HX = X.size();
    int WX = X[0].length();

    for (int y = 0; y <= HX - max(HA, HB); ++y) {
        for (int x = 0; x <= WX - max(WA, WB); ++x) {
            bool valid = true;
            for (int i = 0; i < HA; ++i) {
                for (int j = 0; j < WA; ++j) {
                    if (A[i][j] == '#' && X[y + i][x + j] != '#') {
                        valid = false;
                        break;
                    }
                }
                if (!valid)
                    break;
            }
            for (int i = 0; i < HB; ++i) {
                for (int j = 0; j < WB; ++j) {
                    if (B[i][j] == '#' && X[y + i][x + j] != '#') {
                        valid = false;
                        break;
                    }
                }
                if (!valid)
                    break;
            }
            if (valid)
                return true;
        }
    }

    return false;
}

int main() {
    int HA, WA;
    cin >> HA >> WA;
    vector<string> A(HA);
    for (int i = 0; i < HA; ++i) {
        cin >> A[i];
    }

    int HB, WB;
    cin >> HB >> WB;
    vector<string> B(HB);
    for (int i = 0; i < HB; ++i) {
        cin >> B[i];
    }

    int HX, WX;
    cin >> HX >> WX;
    vector<string> X(HX);
    for (int i = 0; i < HX; ++i) {
        cin >> X[i];
    }

    bool result = checkSheet(A, B, X);

    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
