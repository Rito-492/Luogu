#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 1;
int pre[N];     //本来想封装成类模板，但貌似没必要
int FIND(int x) {
    return pre[x] <= 0 ? x : pre[x] = FIND(pre[x]);
}
void UNION(int x, int y) {
    int xp = FIND(x);
    int yp = FIND(y);
    if (xp == yp)
        return ;
    if (pre[xp] < pre[yp])
        pre[yp] = xp, pre[xp]--;
    else
        pre[xp] = yp, pre[yp]--;
}
int main () {
    int n, m, z, x, y;
    cin.sync_with_stdio();
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        cin >> z >> x >> y;
        if (z == 1)
            UNION(x, y);
        if (z == 2)
            cout << (FIND(x) == FIND(y) ? "Y" : "N") << endl;
    }
    return 0;
}