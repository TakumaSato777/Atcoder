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

int x,y;

int main() {
    cin >> x >> y;
    if((x == 0 && y == 1) || (x == 1 && y == 0)) cout << 2 << endl;
    if((x == 0 && y == 2) || (x == 2 && y == 0)) cout << 1 << endl;
    if((x == 1 && y == 2) || (x == 2 && y == 1)) cout << 0 << endl;
    if(x == 0 && y == 0) cout << 0 << endl;
    if(x == 1 && y == 1) cout << 1 << endl;
    if(x == 2 && y == 2) cout << 2 << endl;

    return 0;
}