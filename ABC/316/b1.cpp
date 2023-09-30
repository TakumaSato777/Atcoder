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
    vector<int> A(N+1);
    int m = 10000;
    rep(i,N){
        cin >> A[i];
        m = min(m,A[i]);
    }

    rep1(i,0,N-1){
        int big = A[i+1],small = A[i];
        if(big-small != 1) {
            cout << small + 1 << endl;
            break;
        }
    }
    rep(i,N) cout << A[i] << endl;

    return 0;
}