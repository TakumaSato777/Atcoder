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

int N;
string S;

int main() {
    cin >> S;

    int bigcount = 0;
    rep(i,S.size()){
        if(isupper(S[i])){
            bigcount++;
        }
    }

    if(bigcount == 0 || S.size()-bigcount == 0){
        cout << "No" << endl;
        return 0;
    }

    rep(i,S.size()){
        rep(j,S.size()){
            if(i != j){
                if(S[i] == S[j]){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}