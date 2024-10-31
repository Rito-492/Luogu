#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
const int INF = 0x3f3f3f3f;
int n, dp[N];
int dfs(int i) {
    if (dp[i] != INF)
        return dp[i];
    if (i & 1)
        dp[i] = dfs(i - 1) + 1;
    else
        dp[i] = min(dfs(i - 1), dfs(i / 2)) + 1;
    return dp[i];
}
int main () {
    memset(dp, 0x3f, sizeof(dp));
    dp[1] = 0;
    cin >> n;
    cout << dfs(n);
    return 0;
}