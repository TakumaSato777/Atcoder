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

int N,H,X;

int main() {
    cin >> N >> H >> X;
    vector<int> P(N+1);

    rep(i,N){
        cin >> P[i];
    }
    
    int sa = 10000;
    int index;

    rep(i,N){
        if(H+P[i] >= X){
            if(sa >= H+P[i] - X){
            index = i;
            sa = H + P[i] - X;
            }
        }
    }

    cout << index+1 << endl;



    return 0;
}