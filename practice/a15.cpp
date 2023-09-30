#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N;
int A[100009],B[100009];

int main() {
    cin >> N;

    rep1(i,N) cin >> A[i];

    vector<int> T;
    rep1(i,N) T.push_back(A[i]);
    sort(T.begin(),T.end());

    T.erase(unique(T.begin(),T.end()),T.end());

    rep1(i,N){
        B[i] = lower_bound(T.begin(),T.end(),A[i]) - T.begin() + 1;
    }

    rep1(i,N){
        if(i >= 2) cout << " ";
        cout << B[i];
    }

    cout << endl;

    return 0;
}
