#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    long long int A,B;
    long long int ans = 0;
    cin >> A >> B;
    
    ans = (A + B -1) / B;

    cout << ans << endl;
    return 0;
}