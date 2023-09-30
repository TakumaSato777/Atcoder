#include <iostream>
using namespace std;

int main() {
    int N;
    int A[1100];
    int B[1100];
    int ans[1100];
    cin >> N;

    for (int i =0; i < N; ++i) cin >> A[i] >> B[i];
    
    for(int i = 0; i < N; ++i){
        ans[i] = A[i] + B[i];
    }

    for(int i = 0; i < N; ++i){
        cout << ans[i] << endl;
    }

    return 0;
}