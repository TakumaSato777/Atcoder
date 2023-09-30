#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,ans;
string S;

int main() {
    cin >> N;
    cin >> S;

    int a=0,b=0,c=0;

    rep(i,N){
        if(S[i] == 'A') a += 1;
        if(S[i] == 'B') b += 1;
        if(S[i] == 'C') c += 1;
        if(a >= 1 && b >= 1 && c >= 1){
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}