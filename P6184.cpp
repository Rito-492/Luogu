#include <bits/stdc++.h>
using namespace std;
const int N = 2500 + 1;
int n, dp[5][N];
int main () {
    cin >> n;
    /*  完全背包没有顺序啊？*/
    /*  枚举顺序会有影响 */
    dp[0][0] = 1;
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= min(j, (n - 1) >> 1); k++)
                dp[i][j] += dp[i - 1][j - k];
    cout << dp[4][n];
    return 0;
}
