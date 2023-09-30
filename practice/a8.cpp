#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
 
int main() {
    int H,W,Q;
    int X[1509][1509];
    int Z[1509][1509]; 
    int A[100009],B[100009],C[100009],D[100009];

    cin >> H >> W;
 
    rep1(i,H){
        rep1(j,W) cin >> X[i][j];
    }
 
    cin >> Q;
 
    rep(i,Q) cin >> A[i] >> B[i] >> C[i] >> D[i];
    
    for(int i = 0; i <= H; i++){
        for(int j = 1; j<=W; j++)Z[i][j] = 0;
    }
 
    rep1(i,H){
        rep1(j,W) Z[i][j] = Z[i][j-1] + X[i][j];
    }
 
    rep1(j,W){
        rep1(i,H) Z[i][j] = Z[i-1][j] + X[i][j];
    }
 
    rep1(i,Q){
        cout << Z[C[i]][D[i]] + Z[A[i-1]][B[i]-1] - Z[A[i]-1][D[i]] - Z[C[i]][B[i]-1] << endl;
    }
    
    return 0;
}
