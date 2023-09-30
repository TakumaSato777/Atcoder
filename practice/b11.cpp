#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,Q,X;
int A[100009];

int search(int x){
    int pos = lower_bound(A+1,A+N+1,x)-A;
    return pos;
}

int main() {
    cin >> N;
    rep1(i,N) cin >>A[i];
    sort(A+1,A + N +1);
    cin >> Q;

    rep(i,Q){
        cin >> X;
        int ans = search(X);
        cout << ans-1 << endl;
    }

    return 0;
}