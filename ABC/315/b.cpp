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

int M;

int main() {
    cin >> M;
    vector<int> D(M+1);
    rep1(i,1,M+1) cin >> D[i];

    int day = 0;

    rep1(i,1,M+1) day += D[i];
    int mid = (day+1)/2;
    int month;
    
    rep1(i,1,M+1){
        day -= D[i];

        if(day < mid) {
            month = i;
            day += D[i];
            break;
        }

    }

    int ans = day - mid +1;

    cout << month << " " << ans << endl;

    return 0;
}