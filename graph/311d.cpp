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

int H,W;

const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};


int main() {
    cin >> H >> W;
    vector<string> S(H);
    rep(i,H)cin >> S[i];

    vector<vector<bool>> seen(H,vector<bool>(W,false));

    auto dfs = [&](auto self,int x,int y) -> void{
        seen[x][y] = true;
        rep(dir,4){
            int x2 = x,y2 = y;
            while(S[x2 + dx[dir]][y2+dy[dir]] == '.'){
                seen[x2][y2] = true;
                x2 += dx[dir];
                y2 += dy[dir];
            }
            if(!seen[x2][y2]){
                self(self,x2,y2);
            }
        }
    };

    dfs(dfs,1,1);
    int res = 0;
    rep(i,H){
        rep(j,W){
            if(seen[i][j]) ++res;
        }
    }

    cout << res << endl;

    return 0;
}