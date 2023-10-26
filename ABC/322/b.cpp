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

int N,M;
string S,T;
bool atama = true;
bool ushiro = true;;

int main() {
    cin >> N >> M >> S >> T;

    rep(i,N){
        if(T[i] != S[i]){
            atama = false;
        }
    }
    int count = 0;
    rep1(i,M-N,M){
        if(T[i] != S[count]){
            ushiro = false;
        }
        count++;
    }

    if(atama && ushiro){
        cout << 0 << endl;
    }else if(atama && !ushiro){
        cout << 1 << endl;
    }else if(!atama && ushiro){
        cout << 2 << endl;
    }else if(!atama && !ushiro){
        cout << 3 << endl;
    }
    return 0;
}