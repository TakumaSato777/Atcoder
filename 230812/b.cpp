#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cstdlib>
#include <cmath>
using ll=long long;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N,X,a;

int main() {
    cin >> N;
    vector<vector<int>> R;
    vector<int> C(N+1);
    vector<int> ans;
    vector<int> A;
    
    rep1(i,1,N+1){
        cin >> C[i];
        A.clear();
        rep(j,C[i]){
            cin >> a;
            A.push_back(a);
        }
        R.push_back(A);
    }
    cin >> X;

    int min = 50;

    rep(i,N){
        if(count(R[i].begin(),R[i].end(),X)){
            if(min > R[i].size()){
                min = R[i].size();
                ans.clear();
                ans.push_back(i+1);
            }
            else if(min == R[i].size()){
                ans.push_back(i+1);
            }
        }
    }

    cout << ans.size() << endl;

    if(ans.size()){
        for (int i = 0; i < ans.size(); ++i) {
            cout << ans[i];
        
        if (i < ans.size() - 1) {
            cout << " ";
            }
        }
        cout << endl;
    }


    return 0;
}