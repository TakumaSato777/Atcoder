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

string f,s;

int main() {
    map<string,int> M;
    vector<string> name;
    rep(i,1056){
        cin >> f >> s;
        if(M[f] >= 1){
            name.push_back(f);
        }
        M[f]++;
    }
    cout << "ここから" << endl;
    rep(i,name.size()){
        cout << name[i] << endl;
    }
    return 0;
}