#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
int main () {
    int n, a, ans = INT_MIN, s[N], dp[N];
    s[0] = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        s[i] = s[i - 1] + a;
    }
    dp[0] = INT_MAX;
    for (int i = 1; i <= n; i++)    //前i个数中的最小值（不含i）
        dp[i] = min(dp[i - 1], s[i - 1]);
    for (int i = 1; i <= n; i++)
        ans = max(ans, s[i] - dp[i]);
    printf("%d", ans);
    return 0;
}