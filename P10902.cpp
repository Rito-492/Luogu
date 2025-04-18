#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL INF = 0x3f3f3f3f;
const LL N = 1e5 + 1;
LL n, a[N], d[N], ans;
int main () {
    cin.sync_with_stdio(0);
    
    cin >> n;
    for (LL i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n >> 1; i++)
        d[i] = a[i] - a[n - i + 1];
    
    for (LL i = 1; i <= n >> 1; i++) {
        ans += abs(d[i]);
        if (d[i] > 0 && d[i + 1] > 0)
            d[i + 1] -= min(d[i], d[i + 1]);
        if (d[i] < 0 && d[i + 1] < 0)
            d[i + 1] -= max(d[i], d[i + 1]);
    }
    cout << ans << endl;
    return 0;
}