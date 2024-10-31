#include <bits/stdc++.h>
using namespace std;
const int N = 2e2 + 1;
const int INF = 0x3f3f3f3f;
int main () {
    int n, cost[N][N], dp[N];
    memset(dp, INF, sizeof(dp));
    cin >> n;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            cin >> cost[i][j];
    dp[1] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++)
            dp[i] = min (dp[i], dp[j] + cost[j][i]);
    cout << dp[n];
    return 0;
}