#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e5 + 1;
LL n, m, c[N], s1, s2, p1, p2, x1, x2, mind;
int main () {
    cin.sync_with_stdio(0);

    cin >> n;
    for (LL i = 1; i <= n; i++)
        cin >> c[i];
    cin >> m >> p1 >> s1 >> s2;

    c[p1] += s1;
    for (LL i = 1; i < m; i++)
        x1 += c[i] * (m - i);
    for (LL i = m + 1; i <= n; i++)
        x2 += c[i] * (i - m);
    
    mind = abs(x1 - x2);
    p2 = m;
    for (LL i = 1; i<= n; i++) {
        LL tmp;
        if (i < m) {
            tmp = x1 + (m - i) * s2;
            if (abs(tmp - x2) < mind)
                mind = abs(tmp - x2), p2 = i;
        } else if (i > m) {
            tmp = x2 + (i - m) * s2;
            if (abs(tmp - x1) < mind)
                mind = abs(tmp - x1), p2 = i;
        }
    }
    cout << p2 << endl;
    return 0;
}