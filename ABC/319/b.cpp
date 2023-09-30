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

bool yakusu(int x,int y){
    if(x % y == 0){
        return true;
    }
    else return false;
}

int main() {
    cin >> N;
    bool hantei = false;
    vector<string> ans;
    vector<int> J;
    
    rep1(i,0,N+1){
        bool hantei = false;
        rep1(j,1,10){
            if(yakusu(N,j)){
                J.push_back(j);
            }
        }
        rep(k,J.size()){
            if(yakusu(i,N/J[k])){
                ans.push_back(to_string(J[k]));
                hantei = true;
                break;
            }
        }
        if(!hantei) ans.push_back("-");
        J.clear();
    }

    rep(i,ans.size()){
        cout << ans[i];
    }

    return 0;
}