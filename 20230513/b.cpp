#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main() {
    int n;
    int x;
    cin >> n;
    vector<int> h(n);
    for (auto& h : h) // N 回繰り返す
	{
        cin >> h; // 各要素に入力を読み込み
	}
    int i = 0;
    while(i < h.size()-1){
        if((abs(h[i]-h[i+1])) == 1) i++;
        else{
            if(h[i] < h[i+1]){
                for(int j = h[i]+1; j < h[i+1]; j++){
                    h.insert(h.begin() + i + 1,j);
                }
            }
            else{
                for(int j = h[i]-1; j > h[i+1]; j--){
                    h.insert(h.begin() + i +1, j);
                }
            }
            i = 0;//何か追加したならiリセット
        }
    }

    rep(i,h.size()){
        cout << h[i] << " ";
    }
    return 0;
}