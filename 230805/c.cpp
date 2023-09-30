#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N;

int main() {
    cin >> N;
    vector<long long> A(N);
    rep(i,N) cin >> A[i];

    long long min = 1000000009;
    long long max = 0;
    int count = 0;

    while(1){
        auto it = max_element(A.begin(), A.end());
        auto it2 = min_element(A.begin(), A.end());
        
        if(*it - *it2 <= 1){
            break;
        }
        else{
            A[distance(A.begin(), it)] -= 1;
            A[distance(A.begin(), it2)] += 1;
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}