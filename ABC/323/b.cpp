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
#include <tuple>
using ll=long long;
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,x,n) for (int i = (int)(x); i < (int)(n); i++)

int N;
string tmp;

int main() {
    cin >> N;
    vector<string> S(N);
    vector<pair<int,int>> total(N);
    rep(i,N){
        cin >> S[i];
        total[i].second = i+1;
    }

    rep(i,N){
        tmp = S[i];
        rep(j,N){
            if(i != j){
                if(tmp[j] == 'o'){
                    total[i].first++;
                }
                else{
                    total[j].first++;
                }
            }
        }
    }

    vector<priority_queue<int>> q(100);

    rep(i,N){
        q[total[i].first].push(total[i].second);
    }
    cout << q[10].top() << endl;
    
    rep(i,100){
        while(!q[100-i-1].empty()){
            cout << q[100-i-1].top() << " ";
            q[100-i-1].pop();
        }
    }

    cout << endl;

    return 0;
}