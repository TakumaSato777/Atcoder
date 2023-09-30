#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,Q;
int tmp;
priority_queue<int,vector<int>,greater<int>> S;

int main() {
    cin >> N;
    rep(i,N){
        cin >> Q;
        if(Q == 1){
            cin >> tmp;
            S.push(tmp);
        }
        else if(Q == 2) cout << S.top() << endl;
        else if(Q == 3) S.pop();
    }

    return 0;
}