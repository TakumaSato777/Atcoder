#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <ranges>
#include <map>
#include <numeric>
using ll=long long;
#include <cctype>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,M;

int main() {
    using namespace std;
    cin >> N >> M;

    vector<ll> L(N);
    rep(i,N){
        cin >> L[i];
        ++L[i];
    }

    ll lower = ranges::max(L) - 1;

    

    return 0;
}