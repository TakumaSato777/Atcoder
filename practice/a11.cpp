#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,X;
int A[100009];

int search(int x){
    int L = 1,R = N;
    while(L<=R){
        int M = (L + R) / 2;
        if(x < A[M])R = M -1;
        if(x == A[M])return M;
        if(x > A[M])L = M + 1;
    }
    return -1;
}

int main() {
    cin >> N >> X;
    rep1(i,N) cin >> A[i];
    int ans = search(X);

    cout << ans << endl;

    return 0;
}