#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 1;
const int MOD = 100003;
int main () {
    int n, k, dp[N];
    memset(dp, 0, sizeof(dp));
    cin >> n >> k;
    dp[1] = 1;
    for (int i = 2; i <= n + 1; i++) {
        int j = i - 1;
        while (j > 0 && i - j <= k) {
            dp[i] += dp[j];
            dp[i] %= MOD;
            j--;
        }
    }
    cout << dp[n + 1] << endl;
    return 0;
}