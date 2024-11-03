#include <bits/stdc++.h>
using namespace std;
const int SIZE = 3e2 + 10;
const int INF = 0x3f3f3f3f;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
int m, ans[SIZE][SIZE], mp[SIZE][SIZE];
bool vis[SIZE][SIZE];
bool isValidCoordinate(int x, int y) {  //第三个问题：有可能走到300以外
    return x >= 0 && y >= 0;
}
int main () {
    memset(mp, 0x3f, sizeof(mp));   //第一个问题：没考虑到0时刻就砸下来，所以mp初值应赋为INF，没仔细看题
    cin.sync_with_stdio();
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int x, y, t;
        cin >> x >> y >> t;
        mp[x][y] = min(mp[x][y], t);
        for (int k = 0; k < 4; k++) {
            int xx = x + dx[k], yy = y + dy[k];
            if (isValidCoordinate(xx, yy))
                mp[xx][yy] = min(mp[xx][yy], t);    //第二个问题：没考虑到一个地方会被砸多次
        }
    }
    int qx[SIZE * SIZE], qy[SIZE * SIZE], l = 1, r = 0;
    qx[++r] = 0, qy[r] = 0;
    vis[qx[l]][qy[l]] = true;
    if (mp[0][0] == 0) {
        cout << -1 << endl;
        return 0;
    }
    while (l <= r) {
        if (mp[qx[l]][qy[l]] == INF) {
            cout << ans[qx[l]][qy[l]] << endl;
            return 0;
        }
        for (int k = 0; k < 4; k++) {
            int xx = qx[l] + dx[k], yy = qy[l] + dy[k];
            if (!vis[xx][yy] && isValidCoordinate(xx, yy) && ans[qx[l]][qy[l]] + 1 < mp[xx][yy]) {
                vis[xx][yy] = true;
                qx[++r] = xx, qy[r] = yy;
                ans[xx][yy] = ans[qx[l]][qy[l]] + 1;
            }
        }
        l++;
    }
    cout << -1 << endl;
    return 0;
}