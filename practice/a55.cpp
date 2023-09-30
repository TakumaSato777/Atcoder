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

int Q;
set<int> S;

int main() {
    cin >> Q;

    rep(i,Q){
        int q,x;
        cin >> q >> x;
        if(q == 1) S.insert(x);
        if(q == 2) S.erase(x);
        if(q == 3){
            auto itr = S.lower_bound(x);
            if(itr == S.end()) cout << -1 << endl;
            else cout << (*itr) << endl; 
        }
    }
    return 0;
}