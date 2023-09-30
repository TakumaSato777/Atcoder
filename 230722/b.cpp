#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int N, D;
string x;

int main() {
    int count = 0,ans = 0;
    bool hantei;
    cin >> N >> D;
    vector<string> yasumi;

    rep(i,N){
        cin >> x;
        yasumi.push_back(x);
    }

    rep(i,D){
        hantei = true;
        rep(j,N){
            string hito = yasumi[j];
            if(hito[i] == 'x') hantei = false;
        }
        if(hantei) count += 1;
        else count = 0;
        if(count > ans) ans = count; 
    }
    cout << ans << endl;

    return 0;
}