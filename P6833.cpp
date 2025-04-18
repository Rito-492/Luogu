#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL INF = 0x3f3f3f3f;
const LL N = 1e3 + 1;
LL n, m, a, b, c, r[N][N], ans1[N][N], ans2[N][N], ans3[N][N], ans = INF;
LL dx[] = {-1, 1, 0, 0};
LL dy[] ={0, 0, -1, 1};
bool vis[N][N];

struct node {
    LL x, y, dis;
    bool operator < (const node &a) const {
        return dis > a.dis;
    }
};

inline bool inMap(LL x, LL y) {
    return x > 0 && x <= n && y > 0 && y <= m;
}
int main () {
    cin.sync_with_stdio(0);
    memset(ans1, 0x3f, sizeof ans1);
    memset(ans2, 0x3f, sizeof ans2);
    memset(ans3, 0x3f, sizeof ans3);
    
    cin >> n >> m >> a >> b >> c;
    for (LL i = 1; i <= n; i++)
        for (LL j = 1; j <= m; j++)
            cin >> r[i][j];
    
    memset(vis, 0, sizeof vis);
    priority_queue<node> q1;
    ans1[1][a] = r[1][a];
    vis[1][a] = 1;
    node tmp1;
    tmp1.x = 1, tmp1.y = a, tmp1.dis = ans1[1][a];
    q1.push(tmp1);
    while (!q1.empty()) {
        auto [x, y, dis] = q1.top(); q1.pop();
        if (dis > ans1[x][y]) continue;

        for (LL i = 0; i < 4; i++) {
            LL nx = x + dx[i], ny = y+dy[i];
            if (inMap(nx, ny) && !vis[nx][ny]) {
                if (ans1[nx][ny] > ans1[x][y] + r[nx][ny]) {
                    ans1[nx][ny] = ans1[x][y] + r[nx][ny];
                    
                }
                node tmp;
                tmp.x = nx; tmp.y = ny; tmp.dis = ans1[nx][ny];
                q1.push(tmp);
                vis[nx][ny] = 1;
            }
        }
    }

    memset(vis, 0, sizeof vis);
    priority_queue<node> q2;
    ans2[n][b] = r[n][b];
    vis[n][b] = 1;
    node tmp2;
    tmp2.x = n, tmp2.y = b, tmp2.dis = ans2[n][b];
    q2.push(tmp2);
    while (!q2.empty()) {
        auto [x, y, dis] = q2.top(); q2.pop();
        if (dis > ans2[x][y]) continue;

        for (LL i = 0; i < 4; i++) {
            LL nx = x + dx[i], ny = y+dy[i];
            if (inMap(nx, ny) && !vis[nx][ny]) {
                if (ans2[nx][ny] > ans2[x][y] + r[nx][ny]) {
                    ans2[nx][ny] = ans2[x][y] + r[nx][ny];
                    
                }
                node tmp;
                tmp.x = nx; tmp.y = ny; tmp.dis = ans2[nx][ny];
                q2.push(tmp);
                vis[nx][ny] = 1;
            }
        }
    }

    memset(vis, 0, sizeof vis);
    priority_queue<node> q3;
    ans3[n][c] = r[n][c];
    vis[n][c] = 1;
    node tmp3;
    tmp3.x = n, tmp3.y = c, tmp3.dis = ans3[n][c];
    q3.push(tmp3);
    while (!q3.empty()) {
        auto [x, y, dis] = q3.top(); q3.pop();
        if (dis > ans3[x][y]) continue;

        for (LL i = 0; i < 4; i++) {
            LL nx = x + dx[i], ny = y+dy[i];
            if (inMap(nx, ny) && !vis[nx][ny]) {
                if (ans3[nx][ny] > ans3[x][y] + r[nx][ny]) {
                    ans3[nx][ny] = ans3[x][y] + r[nx][ny];
                    
                }
                node tmp;
                tmp.x = nx; tmp.y = ny; tmp.dis = ans3[nx][ny];
                q3.push(tmp);
                vis[nx][ny] = 1;
            }
        }
    }
    
    for (LL i = 1; i <= n; i++)
        for (LL j = 1; j <= m; j++)
            ans = min(ans, ans1[i][j] + ans2[i][j] + ans3[i][j] - 2 * r[i][j]);
    cout << ans << endl;
    return 0;
}