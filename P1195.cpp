#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
const int M = 1e4 + 1;
struct edge {
    int x, y, l;
};

bool cmp(edge a, edge b) {
    return a.l < b.l;
}

int f[N];

int FIND(int x) {
    return f[x] < 0 ? x : f[x] = FIND(f[x]);
}

void UNION(int x, int y) {
    int fx = FIND(x);
    int fy = FIND(y);
    if (fx == fy)
        return ;
    if (f[fx] < f[fy]) {
        f[fx] += f[fy];
        f[fy] = fx;
    } else {
        f[fy] += f[fx];
        f[fx] = fy;
    }
}

int main () {

    cin.sync_with_stdio();
    memset(f, -1, sizeof f);

    int n, m, k;
    edge e[M];
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
        cin >> e[i].x >> e[i].y >> e[i].l;

    sort(e + 1, e + m + 1, cmp);
    int ans = 0, cnt = 0;
    for (int i = 1; i <= m && cnt < n - k; i++)
        if (FIND(e[i].x) != FIND(e[i].y)) {
            UNION(e[i].x, e[i].y);
            ans += e[i].l;
            cnt ++;
        }
    if (cnt == n - k)
        cout << ans;
    else
        cout << "No Answer";
    return 0;
}