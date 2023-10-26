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
    int count = 0;
    rep(i,S.size()){
        if(S[i] == 'a') count++;
    }
    
    int tuketa = 0;
    bool hantei = false;
    string T;
    char a = 'a';
    while(1){
        T = S;
        reverse(T.begin(),T.end());
        if (S == T)
        {
            hantei = true;
            break;
        }

        if(tuketa > count/2) break;

        S = a + S;
        tuketa++;
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}