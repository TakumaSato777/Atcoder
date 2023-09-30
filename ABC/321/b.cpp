#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
#include <cstdlib>
#include <cmath>
#include<stack>
#include <map>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,X;


int main() {
    cin >> N >> X;
    vector <int> score(N-1);
    rep(i,N-1) cin >> score[i];
    sort(score.begin(),score.end());

    int ans = -1;
    int allwa = 0;
    rep1(i,0,N-1){
        allwa += score[i];
    }

    int maewa = allwa - score[N-2];
    if(maewa >= X) {
        ans = 0;
        cout << ans << endl;
        return 0;
    }

    int nakawa = allwa - score[0] - score[N-2];
    if(nakawa >= X) {
        ans = 0;
        cout << ans << endl;
        return 0;
    }
    int ushirowa = allwa - score[0]; ///ここから
    
    if(X - nakawa <= 100 && X - nakawa >= 0) {
        ans = X - nakawa;
        cout << ans << endl;
        return 0;
    }



    if(ushirowa >= X) {
        ans = score[N-2];
        cout << ans << endl;
        return 0;
    }

    if(N == 3){
        if(score[0] >= X){
            cout << 0 << endl;
            return 0;       
        }
        
        if(score[N-2] >= X){
            cout << 0 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}