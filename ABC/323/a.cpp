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

string S;

int main() {
    cin >> S;
    bool hantei = true;

    rep(i,16){
        if(i % 2 != 0){
            if(S[i] == '1') hantei = false;
        }
    }
    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}