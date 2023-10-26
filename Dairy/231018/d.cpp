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

int N;

int main() {
    cin >> N;
    vector<int> P(N-1);
    rep(i,N-1) cin >> P[i];

    int ans = 0;
    int cnt = N-2;
    while(1){
        int parent = P[cnt];
        ans++;
        if(parent == 1) break;

        cnt = parent - 2;
    }

    cout << ans << endl;

    return 0;
}