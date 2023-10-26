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

char x;

int main() {
    int even = 0,odd = 0;
    vector<vector<char>> all(12,vector<char>(4));
    
    rep(i,12){
        rep(j,4){
            cin >> all[i][j];
        }
    }

    rep(i,12){
        rep(j,4){
            if((i%2 == 0 && j%2 == 0)  || (i%2 != 0 && j%2 != 0)){
                if(all[i][j] == '#') even += 1;
            }
            else{
                if(all[i][j] == '#') odd += 1;
            }
        }
    }

    if((odd == even) && (odd + even == 16)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}