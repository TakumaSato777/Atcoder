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
#include <cctype>
using namespace std;
using ll=long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,M;

void dfs(const Graph &G, int v, vector<bool> &seen) {
    // 頂点 v を探索済みにする
    seen[v] = true;
    
    // 頂点 v に隣接する各頂点 v2 を順に探索する
    for (auto v2 : G[v]) {
        // 頂点 v2 が探索済みならばスキップ
        if (seen[v2]) continue;
        
        // 再帰的に探索
        dfs(G, v2, seen);
    }
}

int main() {
    cin >> N >> M;
    Graph G(N);

    rep(i,M){
        int u,v;
        cin >> u >> v;
        --u,--v;
        G[u].push_back(v);
        G[v].push_back(u);

    }

    int res = 0;
    vector<bool> seen(N,false);
    rep(v,N){
        if(seen[v]) continue;

        ++res;
        dfs(G,v,seen);
    }

    cout << res << endl;

    return 0;
}