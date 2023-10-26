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
using Graph = vector<vector<int>>;

int N,M;

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

    

    return 0;
}