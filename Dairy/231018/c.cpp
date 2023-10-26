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

ll K;
string A,B;

int main() {
    cin >> K >> A >> B;

    ll sizeA = A.size();
    ll sizeB = B.size();
    ll a=0,b=0;
    ll kake = 1;
    for(int i = sizeA-1;i >= 0;i--){
        a += (A[i]-'0')*kake;
        kake *= K;
    }
    kake = 1;
    
    for(int i = sizeB-1;i >= 0;i--){
        b += (B[i]-'0')*kake;
        kake *= K;
    }
    cout << a*b << endl;


    return 0;
}