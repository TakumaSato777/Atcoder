#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n,t;
    cin >> n >> t;
    int c[200010];///色///
    int r[200010];///値///
    int ans = 0;
    rep1(i,n) cin >> c[i];
    rep1(i,n) cin >> r[i];
    
    bool irohantei = false;
    int max = 0;///値最大///

    rep1(i,n) if(c[i] == t) irohantei = true;///tと同じ色があるか判定///

    if(irohantei == true){
        rep1(i,n) {///色がtであるものを見つける///
            if(c[i] == t){///色同じなら///
                if(r[i] > max){///最大値確認して最大値と答え変更///
                    max = r[i];
                    ans = i;
                }
            }
        }
    }else{
        rep1(i,n){///色が1と同じもの見つける///
            if(c[i] == c[1]){
                if(r[i] > max){///最大値確認して最大値と答え変更///
                    max = r[i];
                    ans = i;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}