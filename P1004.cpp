#include <bits/stdc++.h>
using namespace std;
const int N = 9 + 1;
int n, x, y, val, mp[N][N], dp[N][N][N][N];
int main () {
    cin >> n;
    cin >> x >> y >> val;
    while (x != 0 || y != 0 || val != 0) {
        mp[x][y] = val;
        cin >> x >> y >> val;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                for (int l = 1; l <= n; l++) {
                    dp[i][j][k][l] = max(max(dp[i - 1][j][k - 1][l], dp[i][j - 1][k - 1][l]), max(dp[i - 1][j][k][l - 1], dp[i][j - 1][k][l - 1])) + mp[i][j] + mp[k][l];
                    if (i == k && j == l)
                        dp[i][j][k][l] -= mp[i][j];
                }
    cout << dp[n][n][n][n];
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 9 + 1;
int n, ans = -1, mp[N][N];
bool vis[N][N];
// 深搜拿42分，其他TLE
void dfs(int x, int y, int s, bool arv) {
    if (x == n && y == n) {
        if (arv) {
            ans = max(ans, s);
            return ;
        }
        else {
            arv = true;
            dfs(1, 1, s, arv);
        }
    }
    else {
        if (mp[x][y] && !vis[x][y]) {
            vis[x][y] = vis[x + n][y + n] = true;
            if (x + 1 <= n && y <= n)
                dfs(x + 1, y, s + mp[x][y], arv);
            if (x <= n && y + 1 <= n)
                dfs(x, y + 1, s + mp[x][y], arv);
            vis[x][y] = vis[x + n][y + n] = false;
            if (x + 1 <= n && y <= n)
                dfs(x + 1, y, s, arv);
            if (x <= n && y + 1 <= n)    
                dfs(x, y + 1, s, arv);
        }
        else {
            if (x + 1 <= n && y <= n)
                dfs(x + 1, y, s, arv);
            if (x <= n && y + 1 <= n)
                dfs(x, y + 1, s, arv);
        }
    }    
}
int main () {
    int x, y, val;
    cin >> n;
    cin >> x >> y >> val;
    while ( x != 0 && y != 0 && val != 0) {
        mp[x][y] = mp[x + n][y + n] = val;
        cin >> x >> y >> val;
    }
    dfs(1, 1, 0, false);
    cout << ans;
    return 0;
}
*/