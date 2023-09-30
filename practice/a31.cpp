#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

long long N;

int main() {
    cin >> N;
    long long A1 = (N/3);
    long long A2 = (N/5);
    long long A3 = (N/15);

    cout << A1 + A2 - A3 << endl;

    return 0;
}