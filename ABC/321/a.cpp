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
    int l = S.size();

    char M = S[0];
    bool hantei = true;

    rep1(i,1,l){
        if(M <= S[i]){
            hantei = false;
            break;
        }
        M = S[i];
    }
    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
