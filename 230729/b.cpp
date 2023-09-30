#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,M;

int main() {
    cin >> N >> M;

    string S[109];
    rep1(i,N) cin >> S[i];
    
    rep1(i,N){
        rep(j,M){
           if(i+ 8 <= N && j + 9 <= M){
                string s1 = S[i],s2 = S[i+1],s3 = S[i+2],s4 = S[i+3],s6 = S[i+5],s7 = S[i+6],s8 = S[i+7],s9 = S[i+8];
                if(s1[j] == '#' && s1[j+1] == '#' && s1[j+2] == '#' && s1[j+3] == '.' && s2[j] == '#' && s2[j+1] == '#' && s2[j+2] == '#' && s2[j+3] == '.' && s3[j] == '#' && s3[j+1] == '#' && s3[j+2] == '#' && s3[j+3] == '.' && 
                s4[j] == '.' && s4[j+1] == '.' && s4[j+2] == '.' && s4[j+3] == '.' && s6[j+5] == '.' && s6[j+6] == '.' && s6[j+7] == '.' && s6[j+8] == '.' && s7[j+5] == '.' && s7[j+6] == '#' && s7[j+7] == '#' && s7[j+8] == '#' &&
                s8[j+5] == '.' && s8[j+6] == '#' && s8[j+7] == '#' && s8[j+8] == '#' && s9[j+5] == '.' && s9[j+6] == '#' && s9[j+7] == '#' && s9[j+8] == '#'){
                    cout << i << " " << j+1 << endl;
                }
           }
        }
    }

    return 0;
}