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

int main() {
    cin >> N;
    vector<vector<int>> S(110,vector<int>(110,0));
    vector<int> A,B,C,D;
    int a,b,c,d;
    rep(i,N){
        cin >> a >> b >> c >> d;
        A.push_back(a);
        B.push_back(b);
        C.push_back(c);
        D.push_back(d);
    }

    rep(i,N){
        rep1(j,A[i],B[i]){
            rep1(k,C[i],D[i]){
                S[j][k]  += 1;
            }
        }
    }

    int count = 0;

    rep(i,101){
        rep(j,101){
            if(S[i][j] != 0) count += 1;
        }
    }
    cout << count << endl;

    return 0;
}