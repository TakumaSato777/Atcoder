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

ll N;

int main() {
    cin >> N;
    ll ans = 0;
    ll i  = 0;
    while(1){
        i++;
        ans += i;
        if(ans >= N) break; 
    }

    cout << i << endl;

    return 0;
}