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
vector<int> A(19),X(109),Y(109),Z(109),dist(1033);
vector<int> G[1033];

int GetNext(int pos,int idx){
    vector<int> state(19);

    rep1(i,1,N+1){
        int wari = (1 << (i-1));
        state[i] = (pos / wari) % 2;
    }

    state[X[idx]] = 1 - state[X[idx]];
    state[Y[idx]] = 1 - state[Y[idx]];
    state[Z[idx]] = 1 - state[Z[idx]];

    int ret = 0;
    rep1(i,1,N+1) {
        if(state[i] == 1) ret += (1 << (i - 1));
    }

    return ret;

}

int main() {
    cin >> N >> M;
    rep1(i,1,N+1) cin >> A[i];
    rep1(j,1,N+1) cin >> X[j] >> Y[j] >> Z[j];

    rep(i,(1 << N)){
        rep1(j,1,M+1){
            int NextState = GetNext(i,j);
            G[i].push_back(NextState);
        }
    }

    int Goal = (1 << N) -1;
    int Start = 0;
    rep1(i,1,N+1){
        if(A[i] == 1) Start += (1 << (i - 1));
    }

    queue<int> Q;
    rep(i,(1 << N)) dist[i] = -1;
    dist[Start] = 0;
    Q.push(Start);

    while(!Q.empty()){
        int pos = Q.front();Q.pop();
        rep(i,G[pos][i]){
            int nex = G[pos][i];
            if(dist[nex] == -1){
                dist[nex] = dist[pos] + 1;
                Q.push(nex);
            }
        }
    }

    cout << dist[Goal] << endl;

    return 0;
}