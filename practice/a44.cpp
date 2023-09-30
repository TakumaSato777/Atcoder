#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,Q,State = 1;

int main() {
    cin >> N >> Q;
    vector<int> E(N+1);
    rep1(i,1,N+1){
        E[i] = i;
    }

    rep1(i,1,Q+1){
        int Type,x,y;
        cin >> Type;

        if(Type == 1){
            cin >> x >>y;
            if(State == 1) E[x] = y;
            if(State == 2) E[N+1-x] = y;
        }

        if(Type == 2){
            if(State == 1) State = 2;
            else State = 1;
        }

        if(Type == 3){
            cin >> x;
            if(State == 1) cout << E[x] << endl;
            else cout << E[N+1-x] << endl;
        }


    }

    return 0;
}