#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;
vector<pair<int,int>> tmp;

int main() {
    cin >> N;
    vector<int> L(N+1),R(N+1);

    rep1(i,1,N+1){
        cin >> L[i] >> R[i];
        tmp.push_back(make_pair(R[i],L[i]));
    }

    sort(tmp.begin(),tmp.end());
    rep1(i,1,N+1){
        R[i] = tmp[i-1].first;
        L[i] = tmp[i-1].second;
    }

    int Time = 0, Answer = 0;
    rep1(i,1,N+1){
        if(Time <= L[i]){
            Time = R[i];
            Answer += 1;
        }
    }

    cout << Answer << endl;

    return 0;
}