#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

ll N,K;

int main() {
    cin >> N >>K;

    rep(i,K){
        if(N % 200 == 0) N /= 200;
        else N = (N*10*10*10) + 200;
    }

    cout << N << endl;

    return 0;
}