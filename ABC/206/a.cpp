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

double N;

int main() {
    cin >> N;

    if(round(N*1.08) == 206){
        cout << "so-so" << endl;
    }else if(round(N*1.08) < 206){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }

    return 0;
}