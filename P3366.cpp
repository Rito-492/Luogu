#include <bits/stdc++.h>
using namespace std;
const int N = 5e3 + 1;
const int M = 2e5 + 1;
struct edge {
    int x, y, z;
};

bool cmp(edge a, edge b) {
    return a.z < b.z;
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

    int n, m;
    edge e[M];
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> e[i].x >> e[i].y >> e[i].z;

    sort(e + 1, e + m + 1, cmp);
    int ans = 0, cnt = 0;
    for (int i = 1; i <= m && cnt <= n - 1; i++)
        if (FIND(e[i].x) != FIND(e[i].y)) {
            UNION(e[i].x, e[i].y);
            ans += e[i].z;
            cnt ++;
        }
    if (cnt == n - 1)
        cout << ans;
    else
        cout << "orz";
    return 0;
}