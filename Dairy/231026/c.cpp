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
string T;

int main() {
    cin >> N >> T;

    int x = 0,y = 0;
    int pre = 1;

    rep(i,N){
        if(T[i] == 'S'){
            if(pre == 1) x++;///東なら
            if(pre == 2) y--;///南なら
            if(pre == 3) x--;
            if(pre == 4) y++;
        }
        else{
            if(pre <= 3) pre++;
            else if(pre == 4) pre = 1;
        }
    }
    cout << x << " " << y << endl;

    return 0;
}