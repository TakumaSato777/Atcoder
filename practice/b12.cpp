#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

long long N;

bool f(long long x){
    if(1.0*N >= ((x * x * x) + x)) return true;
    return false;
}

int main() {
    cin >> N;
    long long L = 1, R = 100000;
    while(L<R){
        long long M = (L+R) / 2;
        if(f(M) == true) L = M + 1;
        else R = M;
    }
    cout << L << endl;

    return 0;
}