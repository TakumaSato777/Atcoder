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

int N,M,T;

int main() {
    cin >> N >> M >> T;
    vector<int> A(N),X(M),Y(M);
    rep(i,N-1) cin >> A[i];
    rep(i,M) cin >> X[i] >> Y[i];

    int bonuscount = 0;
    
    rep(i,N-1){
        if(T <= A[i]){
            cout << "No" << endl;
            return 0;
        }
        if(bonuscount < M && X[bonuscount] == i + 2){
            T += Y[bonuscount];
            bonuscount++;
        }
        T -= A[i];
    }

    cout << "Yes" << endl;

    return 0;
} 