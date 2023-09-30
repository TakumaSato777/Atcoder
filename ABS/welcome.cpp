#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int a,b,c;
    cin >> a;
    cin >> b >> c;
    string s;
    cin >> s;

    cout << a+b+c << " " << s << endl;
    return 0;
}