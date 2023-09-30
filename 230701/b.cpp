#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int N,M;
    int ans = 0;
    string C[110],D[110];
    int P[110];
    cin >> N >> M;
    
    rep1(i,N) cin >> C[i];
    rep1(i,M) cin >> D[i];
    rep(i,M+1) cin >> P[i];

    rep1(i,N){
        bool hantei = false;
        rep1(j,M){
            if(C[i] == D[j]){
                ans += P[j];
                hantei = true;
            }
        }
        if(!hantei) ans += P[0];
    }

    cout << ans << endl;
    return 0;
}
