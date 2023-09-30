#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int a,b;
    cin >> a >> b;

    if((a*b) % 2 == 0) cout << "Even" << endl;
    else cout <<"Odd" << endl;
    return 0;
}