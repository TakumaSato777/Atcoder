#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,K;
int A[1009],B[1009],C[1009],D[1009];
int P[1000009],Q[1000009];

int main() {
    cin >> N >> K;
    rep1(i,N) cin >> A[i];
    rep1(i,N) cin >> B[i];
    rep1(i,N) cin >> C[i];
    rep1(i,N) cin >> D[i];

    rep1(x,N){
        rep1(y,N){
            P[(x-1)*N+y] = A[x] + B[y];
        }
    }

    rep1(x,N){
        rep1(y,N){
            Q[(x-1)*N+y] = C[x] + D[y];
        }
    }

    sort(Q+1,Q+(N*N)+1);

    rep1(i,N*N){
        int pos1 = lower_bound(Q+1,Q+(N*N)+1,K-P[i]) - Q;
        if(pos1 <= N*N && Q[pos1] == K-P[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;  

    return 0;
}