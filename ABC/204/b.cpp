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

int N,a;
vector<int> A;

int main() {
    cin >> N;
    rep(i,N){
        cin >> a;
        A.push_back(a);
    }
    int ans = 0;

    rep(i,N){
        if(A[i] >= 10) ans += A[i] - 10;
    }

    cout << ans << endl;

    return 0;
}