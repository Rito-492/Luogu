#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 2e2 + 1;
LL n, m, k, a[N], b[N], c[N], ans = 0;
int main () {
    
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    for (int i = 1; i <= k; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int t = 1; t <= k; t++)
                ans = max(ans, (a[i] * b[j]) % c[t]);
    cout << ans << endl;
    return 0;
}