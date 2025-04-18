#include <bits/stdc++.h>
using namespace std;
const int DIR = 4;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
const int N = 1e3 + 1;
const int P = 1e3 + 1;

int n, m, p[N][N];
bool vis[N][N];

inline bool inMap(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m;
}

bool dfs(int x, int y, int mid) {
    if (x == n)
        return true;
    vis[x][y] = true;
    for (int k = 0; k < DIR; k++) {
        int ni = x + dx[k], nj = y + dy[k];
        if (!vis[ni][nj] && p[ni][nj] <= mid && inMap(ni, nj))
            if (dfs(ni, nj, mid))
                return true;
    }
    return false;
}

bool bfs(int mid) {
    queue<pair<int, int> > q;
    q.push({1, 1});
    vis[1][1] = true;
    while (!q.empty()) {
        auto [i, j] = q.front();
        q.pop();
        if (i == n)
            return true;
        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k], nj = j + dy[k];
            if (!vis[ni][nj] && p[i][j] <= mid && inMap(ni, nj)) {
                q.push({ni, nj});
                vis[ni][nj] = true;
            }
        }
    }
    return false;
}
bool check(int mid) {
    memset(vis, false, sizeof vis);
    // return dfs(1, 1, mid);
    return bfs(mid);
}

int main () {
    cin.sync_with_stdio(0);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> p[i][j];
    
    int l = 1, r = P, mid, ans = -1;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}