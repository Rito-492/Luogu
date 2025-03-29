#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
const int M = 1e5 + 1;
int n, m, f[N];
struct Edge {
    int u, v, t;
}e[M];
int FIND(int x) {
    return (f[x] < 0) ? x : f[x] = FIND(f[x]);
}
void UNION(int x, int y) {
    int xf = FIND(x), yf = FIND(y);
    if (xf == yf)
        return ;
    if (f[xf] < f[yf]) {
        f[xf] += f[yf];
        f[yf] = xf;
    } else {
        f[yf] += f[xf];
        f[xf] = yf;
    }
}

bool check(int t) {
    int cnt = 0;
    memset(f, -1, sizeof f);
    for (int i = 1; i <= m; i++)
        if (e[i].t <= t)
            UNION(e[i].u, e[i].v);
    for (int i = 1; i <= n; i++)
        if (f[i] < 0)
            cnt++;
    return cnt == 1;
}
int main () {
    cin.sync_with_stdio(0);

    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> e[i].u >> e[i].v >> e[i].t;
    int l = 1, r = 1e5, mid, ans = -1;
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