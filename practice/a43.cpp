#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,L;

int main() {
    cin >> N >> L;
    vector<int> A(N+1);
    vector<char> B(N+1);

    rep1(i,1,N+1){
        cin >> A[i] >> B[i];
    }

    int ans = 0;

    rep1(i,1,N+1){
        if(B[i] == 'E') ans = max(ans,L-A[i]);
        if(B[i] == 'W') ans = max(ans,A[i]);
    }

    cout << ans << endl;

    return 0;
}