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

int N,M;
vector<int> A,B,C;
vector<pair<int,int>> G[100009];

vector<int> cur(100009);
vector<bool> kakutei(100009);
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;

int main() {
    cin >> N >> M;

    rep(i,M){
        int a,b,c;
        cin >> a >> b >> c;
        G[a].push_back(make_pair(b,c));
        G[b].push_back(make_pair(a,c));
    }
    rep1(i,1,N+1) kakutei[i] = false;
    rep1(i,1,N+1) cur[i] = 2000000000;

    cur[1] = 0;
    Q.push(make_pair(cur[1],1));

    while(!Q.empty()){
        int pos = Q.top().second;Q.pop();

        if(kakutei[pos] == true) continue;

        kakutei[pos] = true;
        rep(i,G[pos].size()){
            int nex = G[pos][i].first;
            int cost = G[pos][i].second;
            if(cur[nex] > cur[pos] + cost){
                cur[nex] = cur[pos] + cost;
                Q.push(make_pair(cur[nex],nex));
            }
        }
    }

    rep1(i,1,N+1){
        if(cur[i] == 2000000000) cout << "-1" << endl;
        else cout << cur[i] << endl;
    } 

    return 0;
}