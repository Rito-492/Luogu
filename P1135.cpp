#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 2e2 + 1;

int n, a, b, k[N], ans[N];
bool vis[N];
queue<int> q;

void dfs(int cur, int dep) {
    if (cur < 1 || cur > n)
        return ;
    if (cur == b) {
        ans[b] = min(ans[b], dep);
        return ;
    }
    if (dep >= ans[cur])
        return ;
    if (vis[cur])
        return ;
    ans[cur] = dep;
    vis[cur] = true;
    dfs(cur + k[cur], dep + 1);
    dfs(cur - k[cur], dep + 1);
    vis[cur] = false;
}
int main () {
    cin.sync_with_stdio(0);
    memset(ans, 0x3f, sizeof ans);
    memset(vis, false, sizeof vis);

    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    
    // q.push(a);
    // ans[a] = 0;
    // while (!q.empty()) {
    //     int cur = q.front(), up = cur + k[cur], down = cur - k[cur];
    //     q.pop();
    //     if (down > 0 && ans[down] == -1) {
    //         q.push(down);
    //         ans[down] = ans[cur] + 1;
    //     }
    //     if (up <= n && ans[up] == -1) {
    //         q.push(up);
    //         ans[up] = ans[cur] + 1;
    //     }
    // }
    // cout << ans[b] << endl;
    dfs(a, 0);
    if (ans[b] == INF)
        cout << -1 << endl;
    else
        cout << ans[b] << endl;
    return 0;
}