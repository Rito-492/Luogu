#include <bits/stdc++.h>
using namespace std;
const int N = 2e4 + 10;
const int BASE = 1e4;
int pre[N];     //秩为子节点个数
int FIND(int x) {
    return pre[x] <= 0 ? x : pre[x] = FIND(pre[x]);
}
void UNION(int x, int y) {
    int xp = FIND(x);
    int yp = FIND(y);
    if (xp == yp)
        return ;
    if (pre[xp] < pre[yp])
        pre[xp] += pre[yp], pre[yp] = xp;
    else
        pre[yp] += pre[xp], pre[xp] = yp;
}
int main () {
    int n, m, p, q;
    memset(pre, -1, sizeof(pre));
    cin.sync_with_stdio();
    cin >> n >> m >> p >> q;
    for (int i = 1; i <= p; i++) {
        int x, y;
        cin >> x >> y;
        UNION(x + BASE, y + BASE);
    }
    for (int i = 1; i <= q; i++) {
        int x, y;
        cin >> x >> y;
        UNION(x + BASE, y + BASE);
    }
    cout << min(-pre[FIND(BASE + 1)], -pre[FIND(BASE - 1)]);
    return 0;
}