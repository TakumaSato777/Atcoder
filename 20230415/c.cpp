#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // 箱とカードを表すデータ構造を初期化
    vector<vector<int>> boxes(n+1);
    unordered_map<int, int> card_to_box;

    // クエリを処理する
    for (int i = 0; i < q; i++) {
        int type, x, y;
        cin >> type >> x;

        if (type == 1) {
            cin >> y;
            boxes[y].push_back(x);
            card_to_box[x] = y;
        } else if (type == 2) {
            // 箱 x のカードに書かれた数を昇順に出力
            sort(boxes[x].begin(), boxes[x].end());
            for (int card : boxes[x]) {
                cout << card << " ";
            }
            cout << endl;
        } else {
            // カード x が入っている箱の番号を昇順に出力
            if (card_to_box.find(x) != card_to_box.end()) {
                cout << card_to_box[x] << endl;
            }
        }
    }

    return 0;
}
