#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n,q;
    int A[100009],L[100009],R[100009],S[100009];
    cin >> n;
    S[0] = 0;
    rep1(i,n){
        cin >> A[i];
        S[i] = S[i-1] + A[i];
    }
    cin >> q;
    rep1(i,q) cin >> L[i] >> R[i];

    rep1(i,q){
        int l = L[i];
        int r = R[i];
        int win = S[r] - S[l-1];
        int lose = r - l + 1 - win;

        if(win > lose) cout << "win" << endl;
        if(win == lose) cout << "draw" << endl;
        if(win < lose) cout << "lose" << endl;
    }

    return 0;
}