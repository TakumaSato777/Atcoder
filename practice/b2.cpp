#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int a,b;
    cin >> a >>b;
    bool hantei = false;

    for(int i=a; i <= b; ++i){
        if(100 % i == 0) hantei = true;
    }

    if(hantei) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}