#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

long long N,K;
long long A[100009];

bool check(long long x){
    long long sum = 0;
    rep1(i,N) sum += x / A[i];
    if(sum >= K) return true;
    return false;
}


int main() {
    cin >> N >>K;
    rep1(i,N) cin >> A[i];
    long long L = 1, R = 1'000'000'000;
    while(L < R){
        long long Mid = (L + R) / 2;
        bool Answer = check(Mid);
        if(Answer == false) L = Mid +1;
        if(Answer == true) R = Mid; 
    }

    cout << L << endl;

    return 0;
}