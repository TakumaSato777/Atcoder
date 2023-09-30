#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int A,B,C,X;
    int ans = 0;
    cin >> A >> B >> C >> X;

    for(int a =0;a <= A; a++){
        for(int b =0;b <= B; b++){
            for(int c = 0; c <= C; c++){
                if((500*a + 100*b + 50*c) == X) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}