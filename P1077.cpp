#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
const int M = 1e2 + 1;
const int MOD = 1e6 + 7;
int n, m, s, a[N], dp[N][M];   //dp[i][j]选前i种只有j盆时的方案数
int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++) {
        s += a[i];
        dp[i][0] = 1;
        for (int j = 1; j <= s && j <= m; j++) {
            int k = j, cnt = 0;
            while (k >= 0 && cnt <= a[i]) {
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                k--, cnt++;
            }
            //cout << dp[i][j] << ' ';
        }
        //cout << endl;
    }
    cout << dp[n][m];
    return 0;
}
/*
虽然过了但是调了好久， 还没太明白为什么i从0开始
其实是手算了一遍后发现dp[i - 1][0]应该是一个特殊的状态，
这个状态存的是前i - 1件物品一件没放， 因为后面有一种情况是全放i物品，
故dp[i][0] = 1
*/