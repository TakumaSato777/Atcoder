#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,A[100009],B[100009],dp[100009];
vector<int> Answer;

int main() {
    cin >> N;
    for(int i = 2; i <= N; i++) cin >> A[i];
    for(int i = 3; i < N; i++) cin >> B[i];

    dp[1] = 0;
    dp[2] = A[2];
    for(int i = 3; i <= N; i++) dp[i] = min(dp[i-1] + A[i],dp[i-2] + B[i]);
    
    int Place = N;
    while(true){
        Answer.push_back(Place);
        if(Place == 1) break;
        if(dp[Place-1] + A[Place] == dp[Place]) Place = Place - 1;
        else Place = Place - 2;
    }

    reverse(Answer.begin(),Answer.end());

    cout << Answer.size() << endl;
    rep(i, Answer.size()){
        if(i >= 1) cout << " ";
        cout << Answer[i];
    }
    cout << endl;

    return 0;
}