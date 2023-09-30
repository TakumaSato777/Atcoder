#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char grid[55][55];
    int dist[55][55];
    ///迷路の行列数///
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) 
            dist[i][j] = -1;
    }
    ///迷路(無向グラフ)入力///
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    --sy; --sx; --gy; --gx;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j)
            cin >> grid[i][j];
    }
    queue<pair<int, int>> que;
    ///最短手数のカウント///
    dist[sy][sx] = 0;
    que.push({sy, sx});
    ///移動の定義///
    int dy[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};
    while (!que.empty()) {
        auto pr = que.front();
        que.pop();
        int y = pr.first;///todoの点取り出し///
        int x = pr.second;
        int dist_yx = dist[y][x];
        for (int i = 0; i < 4; ++i) {
            int y2 = y + dy[i];
            int x2 = x + dx[i];
            if (y2 < 0 || R <= y2 || x2 < 0 || C <= x2)///移動できるか判定///
                continue;
            if (grid[y2][x2] == '#')
                continue;
            if (dist[y2][x2] != -1)
                continue;
            dist[y2][x2] = dist_yx + 1;///手数追加///
            que.push({y2, x2});///新たに見つけた道をキューの最後に追加///
        }
    }
    cout << dist[gy][gx] << endl;///最小手数出力
}