#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int H,W;
    int ans = 0;
    cin >> H >> W;
    vector<string> hairetu(H);
    rep(i,H) cin >> hairetu[i];

    int dx[8] = {1, 0, 1, 1, 0, -1, -1, -1};
    int dy[8] = {0, 1, 1, -1, -1, -1, 1, 0};
    char target[4] = {'n', 'u', 'k', 'e'};

    rep(i,H){
        rep(j,W){
            if(hairetu[i][j] == 's'){
                rep(d,8){
                    int hx = i;
                    int wx = j;
                    bool hantei = true;
                    rep(k,4){
                        hx += dy[d];
                        wx += dx[d];
                        if(hx < 0 || hx >=H || wx < 0 || wx >= W || hairetu[hx][wx] != target[k]){
                            hantei = false;
                            break;
                        }
                    }
                    if(hantei){
                        rep(k,5){
                            cout << i + k*dy[d] + 1 << " " << j + k*dx[d] +1 << endl;
                        }
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
