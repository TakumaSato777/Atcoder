#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int S[8];
    rep(i,8)cin >> S[i];
    bool hantei = true;

    for(int i = 1; i < 8; i++){
        if(S[i] < S[i-1])hantei = false;
    }

    rep(i,8){
        if(S[i] < 100 or S[i] > 675) hantei = false;
        if(S[i] % 25 != 0) hantei = false;
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}