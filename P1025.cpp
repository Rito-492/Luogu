#include <bits/stdc++.h>
using namespace std;
const int N = 2e2 + 1;
const int K = 7;
int n, k, dp[K][N];
int main () {
    cin >> n >> k;
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
        for (int j = 1; j <= k; j++)
            for (int l = i; l <= n; l++)
                dp[j][l] += dp[j - 1][l - i];
    cout << dp[k][n] << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int n, k, ans, path[30], dp[30];
// void dfs(int s, int pre, int dep) {
//     if (dep == k && s == 0) {
//         ans++;
//         return ;
//     }
//     for (int i = pre; i <= s; i++) {
//         dfs(s - i, i, dep + 1);
//     }
// }
// int main () {
//     cin >> n >> k;
//     dfs(n, 1, 0);
//     cout << ans << endl;
//     return 0;
// }