#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N,M;

int main() {
    cin >> N >> M;
    vector<int> saikyo(N+1,0);

    rep1(i,M){
        int a,b;
        cin >> a >> b;
        saikyo[b] += 1;
    }

    int ans = -1;

    rep1(i,N){
        if(saikyo[i] == 0){
            if(ans != -1){
                cout << -1 << endl;
                return 0;
            }
            else{
                ans = i;
            }
        }
    }

    cout << ans << endl;

    return 0;
}