#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 1e2 + 1;
const int M = 20 + 1;
int n, m, k, s[N], dp[1 << M];
int main () {
    memset(dp, 0x3f, sizeof dp);

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int tmp;
            cin >> tmp;
            s[i] |= 1 << (tmp - 1);
        }
        dp[s[i]] = 1;
    }
    for (int i = 0; i <= 1 << m; i++)
        for (int j = 1; j <= n; j++)
            dp[i | s[j]] = min(dp[i | s[j]], dp[i] + 1);
    if (dp[(1 << m) - 1] == INF)
        cout << -1 << endl;
    else
        cout << dp[(1 << m) - 1] << endl;
    return 0;
}