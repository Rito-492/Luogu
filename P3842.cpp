#include <bits/stdc++.h>
using namespace std;
const int N = 2e4 + 1;
int n, l[N], r[N], dp[2][N];
int main () {
    cin.sync_with_stdio();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];
    l[0] = 1, r[0] = 1;
    l[n + 1] = n, r[n + 1] = n;
    for (int i = 1; i <= n + 1; i++) {
        dp[1][i] = r[i] - l[i] + min(dp[0][i - 1] + abs(l[i] - l[i - 1]), dp[1][i - 1] + abs(l[i] - r[i - 1]));
        dp[0][i] = r[i] - l[i] + min(dp[0][i - 1] + abs(r[i] - l[i - 1]), dp[1][i - 1] + abs(r[i - 1] - r[i]));
    }
    cout << dp[1][n + 1] + n - 1;
    return 0;
}