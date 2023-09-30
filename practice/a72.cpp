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

int H,W,K;
int Answer = 0;
vector<vector<char>> c(19,vector<char>(109));
vector<vector<char>> d(19,vector<char>(109));

int paintRow(int remaining_step){
    vector<pair<int,int>> Column;
    rep1(j,1,W+1){
        int cnt = 0;
        rep1(i,1,H+1){
            if(d[i][j] == '.') cnt += 1;
        }
        Column.push_back(make_pair(cnt,j));
    }
    sort(Column.begin(),Column.end());
    reverse(Column.begin(),Column.end());

    rep1(j,0,remaining_step){
        int idx = Column[j].second;
        rep1(i,1,H+1) d[i][idx] = '#';
    }

    int ret = 0;
    rep1(i,1,H+1){
        rep1(j,1,W+1){
            if(d[i][j] == '#') ret += 1;
        }
    }
    return ret;
}

int main() {
    cin >> H >> W >> K;
    rep1(i,1,H+1){
        rep1(j,1,W+1) cin >> c[i][j];
    }

    rep(t,(1 << H)){
        rep1(i,1,H+1){
            rep1(j,1,W+1) d[i][j] = c[i][j];
        }
    

        int remaining_steps = K;
        rep1(i,1,H+1){
            int wari = (1 << (i - 1));
            if((t / wari) % 2 == 0) continue;
            remaining_steps -= 1;
            rep1(j,1,W+1) d[i][j] = '#';
        }

        if(remaining_steps >= 0){
            int SUBAnswer = paintRow(remaining_steps);
            Answer = max(Answer,SUBAnswer);
        }
    }

    cout << Answer << endl;

    return 0;
}