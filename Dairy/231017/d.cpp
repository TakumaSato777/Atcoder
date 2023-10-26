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

string S,T;

int main() {
    cin >> S >> T;

    int L = 0,R = S.size() - 1;
    int M = M = (L+R) / 2;

    while(L <= R){
        M = (L+R) / 2;
        if(!equal(S.begin(),S.begin() + M,T.begin(),T.begin() + M)){
            R = M-1;
            if(equal(S.begin(),S.begin() + M,T.begin(),T.begin() + M) != equal(S.begin(),S.begin() + M-1,T.begin(),T.begin() + M-1)) break;
        }
        else{
            L = M+1;
            if(equal(S.begin(),S.begin() + M,T.begin(),T.begin() + M) != equal(S.begin(),S.begin() + M+1,T.begin(),T.begin() + M+1)) break;
        }

    }
    
    cout << M << endl;

    return 0;
}