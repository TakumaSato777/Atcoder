#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    long double n,k,tmpa,tmpb;
    long double count;
    vector<long double> a,b;
    long double ans = 1;///日にち///
    cin >> n >> k;
    rep(i,n){
        cin >> tmpa >> tmpb;
        a.push_back(tmpa);
        b.push_back(tmpb);
    }
    while(1){
        count = 0;///錠数カウント///
        
        rep(i,n){
            if(a[i] >= ans){
                count += b[i];
            }
        }
        if(count <= k){
            break;
        }

        ans += 1;
    }

    cout << ans << endl;
    return 0;
}