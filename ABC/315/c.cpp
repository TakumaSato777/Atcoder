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

ll N,f,s;

int main() {
    cin >> N;
    vector<pair<ll,ll>> pair;
    rep(i,N){
        cin >> f >> s;
        pair.push_back(make_pair(s,f));
    }
    sort(pair.begin(),pair.end());
    
    ll S = N-1,T = N - 2,U;
    ll M = -1;
    ll dif;  

    while(T >= 0){
        if(pair[S].second == pair[T].second){
            M = max(M,(pair[S].first + (pair[T].first / 2)));
        }
        else{
            dif = pair[S].first + pair[T].first;
            break;
        }
        T--;
    }

    cout << max(M,dif) << endl;

    return 0;
}