#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,K;
int A[100009],R[100009];

int main() {
    cin >> N >> K;
    rep1(i,N) cin >> A[i];

    for(int i = 1; i <= N-1; i++){
        if(i ==1) R[i] = 1;
        else R[i] = R[i-1];

        while(R[i] < N && A[R[i] + 1]- A[i] <= K){
            R[i] += 1;
        }
    }

    long long Answer = 0;
    for(int i = 1; i <= N-1; i++) Answer += (R[i] - i);
    cout << Answer << endl;
 
    return 0;
}