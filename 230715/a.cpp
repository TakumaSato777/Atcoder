#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,P,Q;
int min = 0;
int D[109];

int main() {
    cin >> N >> P >> Q;
    int min = 0;

    rep1(i,N){
        cin >> D[i];
        if(i == 1) min = D[i];
        if(min > D[i]) min = D[i];
    }
    
    if(P < Q + min) cout << P << endl;
    else cout << Q + min << endl;

    return 0;
}