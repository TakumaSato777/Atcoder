#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int H,W;
char c[39][39];
long long dp[39][39];

int main() {
    cin >> H >> W;
    rep1(i,H){
        rep1(j,W){
            cin >> c[i][j];
            dp[i][j] = 0;
        }
    }

    dp[1][1] = 1;

    rep1(i,H){
        rep1(j,W){
            if(i == 1 && j ==1)dp[i][j] = 1;
            if(c[i][j] == '.'){///白なら
                if(i==1){
                    if(c[i][j-1] == '.')dp[i][j] = dp[i][j-1];
                }
                if(j==1){
                    if(c[i-1][j] == '.')dp[i][j] = dp[i-1][j];
                }

                if(c[i-1][j] == '.' && c[i][j-1] == '.') dp[i][j] = dp[i-1][j] + dp[i][j-1];
                
                if(c[i-1][j] == '#' && c[i][j-1] == '.') dp[i][j] = dp[i][j-1];

                if(c[i-1][j] == '.' && c[i][j-1] == '#') dp[i][j] = dp[i-1][j];

            }
        }
    }

    cout << dp[H][W] << endl;
    
    return 0;
}