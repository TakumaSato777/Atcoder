#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

string S;

int main() {
    cin >> S;
    rep(i,S.size()){
        if(S[i] == '6')S[i] = '9';
        else if(S[i] == '9') S[i] = '6';
    }
    reverse(S.begin(),S.end());

    cout << S << endl;

    return 0;
}