#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

long long N,M;
long long ans = 1000000009;


int main() {
    cin >> N >> M;

    vector<long long> A(N+1),A2(N+1),B(M+1),B2(M+1);

    
    rep1(i,N){
        long long x;
        cin >> x;
        A[i] = x;
        A2[i] = x;
    }    

    rep1(i,M){
        long long x;
        cin >> x;
        B[i] = x;
        B2[i] = x;
    }    

    sort(A2.begin(),A2.end());
    sort(B2.begin(),B2.end());

    rep1(i,N){
        long long posA = lower_bound(A2.begin(),A2.end(),A[i]) - A2.begin();
        long long posB = lower_bound(B2.begin(),B2.end(),A[i]) - B2.begin();

        ///cout << posA << " " << posB << endl;
        if(posB == M + 1) ans = B[M] + 1;
        else{
            if(posB == 1){
                posB = M;
            }
            else{
                posB = M - posB;
            }
            if(posA >= posB) ans = min(ans,A[i]);
        }
    }
    
    if(ans == 1000000009) ans = A2[1];
    cout << ans << endl;

    return 0;
}
