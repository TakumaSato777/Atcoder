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

int N,M,P;

int main() {
    cin >> N >> M >> P;

    int count = 0;
    for (int day = 1; day <= N; day++) {
        if ((day - M) % P == 0) {
            count++;
        }
    }
    cout << count << endl;


    return 0;
}