#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
int n, dp[N];
int main () {
    memset(dp, 0x3f, sizeof(dp));
    cin >> n;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = min(dp[i], dp[i - 1] + 1);
        if (i >= 5)
            dp[i] = min(dp[i], dp[i - 5] + 1);
        if (i >= 11)
            dp[i] = min(dp[i], dp[i - 11] + 1);
    }
    cout << dp[n];
    return 0;
}