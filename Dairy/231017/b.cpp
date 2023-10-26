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

int N,A,B;

int main() {
    cin >> N >> A >> B;
    vector<vector<char>> S(N*A,vector<char>(B*N));
    rep(i,N*A){
        rep(j,N*B){
            if((i/A)%2 == 0 && (j/B) % 2 == 0 || (i/A)%2 == 1 && (j/B) % 2 == 1){
                S[i][j] = '.';
            }
            else{
                S[i][j] = '#';
            }
        }
    }

    rep(i,N*A){
        rep(j,N*B){
            cout << S[i][j];
            }
        cout << endl;
    }

    return 0;
}