#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,K;
vector<int> A(N+1),B(N+1);

int GetScore(int a, int b){
    int cnt = 0;
    rep1(i,1,N+1){
        if(a<=A[i] && A[i]<=a+K && b<= B[i] && B[i] <= b+K){
            cnt += 1;
        }
    }
    return cnt;
}

int main() {
    cin >> N >> K;
    rep1(i,1,N+1)cin >> A[i] >> B[i];

    int Answer = 0;

    rep1(a,1,101){
        rep1(b,1,101){
            int Score = GetScore(a,b);
            Answer = max(Answer,Score);
       }
    }

    cout << Answer << endl;

    return 0;
}