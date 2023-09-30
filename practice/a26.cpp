#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N;


bool hantei(int x){
    for(int i = 2;i * i <= x; i++){
        if(x % i == 0) return false;
    } 
    return true;
}

int main() {
    cin >> N;
    vector<int> X(N+1);
    rep1(i,N) cin >> X[i];

    rep1(i,N){
        if(hantei(X[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}