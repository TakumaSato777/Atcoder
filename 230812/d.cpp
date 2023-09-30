#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cctype>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,Q,last;
string S;
char C;


int main() {
    cin >> N >> S >> Q;
    vector<int> t(Q+1),x(Q+1);
    vector<char> C(Q+1);
    int count = 0;
    int jyoutai;
    rep(i,Q){
        cin >> t[i] >> x[i] >> C[i];
        if(t[i] == 1){
            S[x[i]-1] = C[i];
        }
        else if(t[i] == 2){
            count = 1;
            last = i;
            jyoutai = 2;
        }
        else if(t[i] == 3){
            count = 1;
            last = i;
            jyoutai = 3;
        }
    }

    if(t[Q-1] == 1){
        if(count != 0){
            if(jyoutai == 2){
                for (char &c : S) {
                    c = tolower(c);
                }
            }
            else if(jyoutai == 3){
                for (char &c : S) {
                    c = toupper(c);
                }
            }
        }
        rep1(i,last+1,Q){
             S[x[i]-1] = C[i];
        }
    }
    else{
        if(jyoutai == 2){
            for (char &c : S) {
                    c = tolower(c);
                }
            }
        else if(jyoutai == 3){
            for (char &c : S) {
                    c = toupper(c);
                }
        }
    }
    cout << S << endl;

    return 0;
}