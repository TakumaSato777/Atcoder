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



int main() {
    string S;
    cin >> S;

    string result = "";
    for (char c : S) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}