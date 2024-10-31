#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
const int M = 1e4 + 1;
int n, m, a[N], dp[N][M];
int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i][0] = 1;
        for (int j = m; j >= a[i]; j--)
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i]];
        for (int j = a[i] - 1; j > 0; j--)
            dp[i][j] = dp[i - 1][j];
    }
    cout << dp[n][m];
    return 0;
}
/*
  1 2 3 4
1 1 0 0 0
2 2 1 0 0
3 2 2 2 1
4 2 2 4 3
*/