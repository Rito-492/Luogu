#include <bits/stdc++.h>
using namespace std;
const int N = 3.2e4 + 1;
const int M = 60 + 1;
int n, m, dp[N];
bool vis[N];
struct item {
    int v, p, q;
};
vector<item> adj[M];
int main () {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int v, p, q;
        cin >> v >> p >> q;
        if (q == 0)
            adj[i].insert(adj[i].begin(), item{v, p, q});
        else
            adj[q].push_back(item{v, p, q});
    }
    for (int i = 1; i <= m; i++) {
        if (adj[i].size() == 0)
            continue;
        memset(vis, false, sizeof vis);
        for (int k = n; k >= adj[i][0].v; k--)
            if (dp[k] <= dp[k - adj[i][0].v] + adj[i][0].v * adj[i][0].p) {
                dp[k] = dp[k - adj[i][0].v] + adj[i][0].v * adj[i][0].p;
                vis[k] = true;  //标记一下主件是否买过
            }
        for (int j = 1; j < adj[i].size(); j++)
            for (int k = n; k >= adj[i][j].v; k--) {
                if (vis[k - adj[i][j].v])   //如果主件已经买过
                    dp[k] = max(dp[k], dp[k - adj[i][j].v] + adj[i][j].v * adj[i][j].p);
                if (k - adj[i][j].v - adj[i][0].v >= 0 && !vis[k - adj[i][j].v - adj[i][0].v])  //如果主件没有买过，那么买从件的时候也买主件
                    if (dp[k] <= dp[k - adj[i][j].v - adj[i][0].v] + adj[i][j].v * adj[i][j].p + adj[i][0].v * adj[i][0].p) {
                        dp[k] = dp[k - adj[i][j].v - adj[i][0].v] + adj[i][j].v * adj[i][j].p + adj[i][0].v * adj[i][0].p;
                        vis[k] = true;
                    }
            }
    }
    cout << dp[n] << endl;
    return 0;
}