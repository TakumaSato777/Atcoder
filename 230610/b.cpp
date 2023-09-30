#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    char p,q;
    int start,end;
    int ans = 0;
    cin >> p >> q;
    
    if(p < q){
        start = p - 'A';
        end = q - 'A';
    }
    else {
        start = q - 'A';
        end = p - 'A';
    }

    int a[6] = {3,1,4,1,5,9};

    for (int i = start; i < end; i++){
        ans += a[i];
    }


    cout << ans << endl;
    return 0;
}