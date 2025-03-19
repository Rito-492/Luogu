#include <bits/stdc++.h>
using namespace std;
const int MAXM = 2e2 + 10;
const int MAXT = 2e2 + 10;
int n, M, T, m[MAXM], t[MAXT], dp[MAXM][MAXT];
int main () {
    cin >> n >> M >> T;
    for (int i = 1; i <= n; i++)
        cin >> m[i] >> t[i];
    for (int i = 1; i <= n; i++)
        for (int j = M; j >= m[i]; j--)
            for (int k = T; k >= t[i]; k--)
                dp[j][k] = max(dp[j][k], dp[j - m[i]][k - t[i]] + 1);
    cout << dp[M][T] << endl;
    return 0;
}