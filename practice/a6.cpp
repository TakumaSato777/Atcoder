#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int N,Q;
    int A[100010],L[100010],R[100010],S[100010];
    S[0] = 0;
    cin >> N >>Q;
    rep1(i,N){
        cin >> A[i];
        S[i] = S[i-1] + A[i];
    }
    rep1(i,Q){
        cin >> L[i] >> R[i];
    }

    rep1(i,Q){
        int l = L[i];
        int r = R[i];
        cout << S[r] - S[l-1] << endl;
    }

    
    return 0;
}