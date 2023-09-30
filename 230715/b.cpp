#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,M;
int P[109],C[109],F[109][109];
bool hantei = false;

int main() {
    cin >> N >> M;

    rep1(i,N){
        cin >> P[i] >> C[i];
        rep1(j,C[i]) cin >> F[i][j];
    }
    
    rep1(i,N){
        rep1(j,N){
            if(i != j){
                if(P[i] >= P[j]){///(1) ///
                    bool kinouhantei = true;
                    rep1(k,C[j]){///機能判定(2)///
                        bool aru = false;
                        rep1(l,C[i]){
                            if(F[j][k] == F[i][l]) aru = true;
                        }
                        if(aru == false) kinouhantei = false;
                    }

                    if(P[i] > P[j] || kinouhantei == false){///(3)///
                        hantei = true;
                    }
                }
            }
        }
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}