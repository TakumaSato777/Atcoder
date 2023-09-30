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

class UnionFind {
public:
	int par[100009];
	int siz[100009];

	// N 頂点の Union-Find を作成
	void init(int N) {
		for (int i = 1; i <= N; i++) par[i] = -1; // 最初は親が無い
		for (int i = 1; i <= N; i++) siz[i] = 1; // 最初はグループの頂点数が 1
	}

	// 頂点 x の根を返す関数
	int root(int x) {
		while (true) {
			if (par[x] == -1) break; // 1 個先（親）がなければ、ここが根
			x = par[x]; // 1 個先（親）に進む
		}
		return x;
	}

	// 要素 u と v を統合する関数
	void unite(int u, int v) {
		int RootU = root(u);
		int RootV = root(v);
		if (RootU == RootV) return; // u と v が同グループのときは処理を行わない
		if (siz[RootU] < siz[RootV]) {
			par[RootU] = RootV;
			siz[RootV] = siz[RootU] + siz[RootV];
		}
		else {
			par[RootV] = RootU;
			siz[RootU] = siz[RootU] + siz[RootV];
		}
	}

	// 要素 u と v が同一のグループかどうかを返す関数
	bool same(int u, int v) {
		if (root(u) == root(v)) return true;
		return false;
	}
};


int N,M;
vector<int> A(100009),B(100009),C(100009);

int main() {
    cin >> N >> M;
    rep1(i,1,M+1) cin >> A[i] >> B[i] >> C[i];

    UnionFind UF;

    vector<pair<int,int>> Edgelist;
    rep1(i,1,M+1) Edgelist.push_back(make_pair(C[i],i));
    sort(Edgelist.begin(),Edgelist.end());

    int Answer = 0;
    UF.init(N);
    rep(i,Edgelist.size()){
        int idx = Edgelist[i].second;
        if(UF.same(A[idx],B[idx]) == false){
            UF.unite(A[idx],B[idx]);
            Answer += C[idx];
        }
    }

    cout << Answer << endl;

    return 0;
}