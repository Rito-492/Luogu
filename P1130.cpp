#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 1;
const int MAX = 0x3f3f3f3f;
int n, m, mp[N][N], dp[N][N], ans = MAX;
int main () {
    cin.sync_with_stdio();
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)  //枚举每一步
        for (int j = 1; j <= m; j++) {  //枚举每一组
            if (j == 1)
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][m]) + mp[j][i];
            else
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + mp[j][i];
        }
    for (int i = 1; i <= m; i++)
        ans = min(ans, dp[n][i]);
    cout << ans;
    return 0;
}