#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int n, a[N], b[N], dp[2][N];
int main () {
    cin.sync_with_stdio();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[i]) {
                dp[1][j] = max(dp[1][j], dp[0][j - 1] + 1);
            }
            else {
                dp[1][j] = max(dp[0][j], dp[1][j - 1]);
            }
            dp[0][j - 1] = dp[1][j - 1];
        }
        dp[0][n] = dp[1][n];
    }
    cout << dp[1][n];
    return 0;
}