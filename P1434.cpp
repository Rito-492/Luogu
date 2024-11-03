#include <bits/stdc++.h>
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
const int RC = 1e2 + 1;
int r, c, mp[RC][RC], dp[RC][RC], ans;
bool vis[RC][RC];
int dfs(int i, int j) { //以i, j为起点的最长下坡长度
    if (dp[i][j])       //记忆化搜索
        return dp[i][j];
    dp[i][j] = 1;
    vis[i][j] = true;
    for (int k = 0; k < 4; k++) {
        int x = i + dx[k], y = j + dy[k];
        if (mp[i][j] > mp[x][y] && !vis[x][y] && x > 0 && x <= r && y > 0 && y <= c)
            dp[i][j] = max(dp[i][j], 1 + dfs(x, y));
    }
    vis[i][j] = false;
    return dp[i][j];
}
int main () {
    cin.sync_with_stdio();
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            ans = max(ans, dfs(i, j));
    cout << ans;
    return 0;
}