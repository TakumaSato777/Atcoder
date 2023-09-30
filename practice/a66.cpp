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

class unionFind{
    public:
    int par[100009];
    int siz[100009];

    void init(int N){
        rep1(i,1,N+1) par[i] = -1;///親なし///
        rep1(i,1,N+1) siz[i] = 1;
    }

    int root(int x){
        while(true){
            if(par[x] = -1)break;
            x = par[x];
        }
        return x;
    }

    void unite(int u, int v){
        int RootU = root(u);
        int RootV = root(v);

        if(RootU == RootV) return;
        if(siz[RootU] < siz[RootV]){
            par[RootU] = RootV;
            siz[RootV] = siz[RootU] + siz[RootV];
        }
        else{
            par[RootV] = RootU;
            siz[RootU] = siz[RootV] + siz[RootU];
        }
    }

    bool same(int u, int v){
        if(root(u) == root(v)) return true;
        return false;
    }
};

int N,Q;
int Query[100009],u[100009],v[100009];

int main() {
    cin >> N >> Q;
    rep1(i,1,Q+1) cin >> Query[i] >> u[i] >> v[i];

    unionFind UF;
    UF.init(N);
    rep1(i,1,Q+1){
        if(Query[i] == 1){
            UF.unite(u[i],v[i]);
        }
        else{
            if(UF.same(u[i],v[i]) == true) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}