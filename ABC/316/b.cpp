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
    vector<int> A(N);

    rep(i,N) cin >> A[i];

    sort(A.begin(),A.end());

    rep1(i,0,N-1){
        int big = A[i+1],small = A[i];
        if(big-small != 1) {
            cout << small + 1 << endl;
            break;
        }
    }

    return 0;
}