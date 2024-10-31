#include <bits/stdc++.h>
using namespace std;
const int M = 1e4;
const int T = 1e7;
long long m, t, c[M], v[M], dp[T];
int main () {
    cin.sync_with_stdio();
    cin >> t >> m;
    for (int i = 1; i <= m; i++)
        cin >> c[i] >> v[i];
    for (int i = 1; i <= m; i++)
        for (int j = c[i]; j <= t; j++)
            dp[j] = max(dp[j], dp[j - c[i]] + v[i]);
    cout << dp[t];
    return 0;
}