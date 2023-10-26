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
string S;
int main() {
    cin >> N >> S;
    int next,now;
    
    rep(i,N-1){
        int l = 0;
        next = i+1;
        now = 0;
        while(1){
            if(next >= N) break;
            if(S[now] == S[next]) break;
            l++;
            next++;
            now++;
        }
        cout << l << endl;
    }

    return 0;
}