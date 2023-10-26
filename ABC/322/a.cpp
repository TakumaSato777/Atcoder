#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
#include <map>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;
string S;

int main() {
    cin >> N >> S;
    bool hantei = false;
    int ans = -1;

    rep(i,N){
        if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C'){
            hantei = true;
            ans = i+1;
            break; 
        }
    }
    if(hantei) cout << ans << endl;
    else{
         cout << ans << endl;
    }

    return 0;
}