#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    int ans = 0;
    int count = 0;
    cin >> n;///任意の金額///
 
    int coin[6] = {1,5,10,50,100,500};
    int coin_count[6] = {0,0,0,0,0,0};


    rep(i,6){
        if(coin[i] < n - ans){
            ans += coin[i];
            count += 1;
        }
    }


    cout << ans << endl;
    return 0;
}