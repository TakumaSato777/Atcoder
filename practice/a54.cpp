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

int main() {
    cin >> Q;
    map<string,int> M;

    rep(i,Q){
        int q;
        cin >> q;
        if(q == 1){
            string x;
            int y;
            cin >> x >> y;
            M[x] = y; 
        }
        else{
            string s;
            cin >> s;
            cout << M[s] << endl;
        }
    }

    return 0;
}