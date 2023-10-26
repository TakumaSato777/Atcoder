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

int N,a;

int main() {
    cin >> N;
    vector<int> even,odd;
    rep(i,N){
        cin >> a;
        if(a % 2 == 0){
            even.push_back(a);
        }
        else {
            odd.push_back(a);
        }
    }
    if(even.size() < 2 && odd.size() < 2){
        cout << -1 << endl;
        return 0;
    }
    int oddmax,evenmax;

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    if(odd.size() > 1){
        oddmax = odd[odd.size()-1] + odd[odd.size()-2];
        }else oddmax = 0;
    if(even.size() > 1){
        evenmax = even[even.size()-1] + even[even.size()-2];
    }else evenmax = 0;

    if(oddmax > evenmax){
        cout << oddmax << endl;
    }
    else cout << evenmax << endl;

    return 0;
}