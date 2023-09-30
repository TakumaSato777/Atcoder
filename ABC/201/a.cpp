#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)


int main() {
    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];
    sort(A.begin(),A.end());
    if(A[2] - A[1] == A[1] - A[0]) cout << "Yes";
    else cout << "No" << endl;  

    return 0;
}