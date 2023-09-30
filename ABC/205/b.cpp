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
    vector<int> A(N),B;

    rep(i,N) cin >> A[i];

    sort(A.begin(),A.end());

    rep(i,N) B.push_back(i+1);

    if(A == B) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}