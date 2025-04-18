#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
const int M = 1e5 + 1;
int n, m, a[N], b[N], sm[N], pm[N], sv[N], pv[N], dp[M];

bool check(int x) {
    int cnt = 0, req;
    for (int i = 1; i <= n; i++) {
        req = a[i] * x - b[i];
        if (req <= 0)
            continue;
        memset(dp, 0, sizeof dp);
        for (int j = pm[i]; j <= m; j++)
            dp[j] = max(dp[j], dp[j - pm[i]] + sm[i]);
        for (int j = pv[i]; j <= m; j++)
            dp[j] = max(dp[j], dp[j - pv[i]] + sv[i]);
        // int tmp = lower_bound(dp, dp + m, req) - dp;
        bool flag = false;
        for (int j = 1; j <= m; j++)
            if (dp[j] >= req) {
                cnt += j;
                flag = true;
                break;
            }
        if (!flag) return false;
    }
    return cnt <= m;
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i] >> sm[i] >> pm[i] >> sv[i] >> pv[i];
    int  l = 1, r = 1e8, mid, ans = -1;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else 
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}