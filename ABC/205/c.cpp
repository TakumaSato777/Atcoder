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

int A,B,C;

ll Power(ll a, ll b){
    ll p = a,Answer = 1;
    rep(i,30){
        int wari = (1 << i);
        if((b / wari) % 2 == 1) Answer = Answer * p;
        p =  p * p;
    }
    return Answer;
}

int main() {
    cin >> A >> B >> C;

    if(Power(A,C) > Power(B,C)) cout << ">" << endl;
    else if(Power(A,C) < Power(B,C)) cout << "<" << endl;
    else cout << "=" << endl;

    return 0;
}