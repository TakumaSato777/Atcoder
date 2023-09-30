#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int a,b,c;

int main() {
    cin >> a >> b >>c;

    if(a == b) cout << c << endl;
    else if(a == c) cout << b << endl;
    else if(b == c) cout << a << endl;
    else cout << 0 << endl;

    return 0;
}