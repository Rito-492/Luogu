#include <bits/stdc++.h>
using namespace std;
const int NM = 1e2 + 1;
int n, m, ans, a[NM][NM], s[NM][NM], s_h[NM];
int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            s_h[j] = s_h[j - 1] + a[i][j];
            s[i][j] = s[i - 1][j] + s_h[j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int k = 1; k <= i; k++)
                for (int l = 1; l <= j; l++) {
                    int squre = s[i][j] -  s[k - 1][j] - s[i][l - 1] + s[k - 1][l - 1];
                    if (i - k == j - l && squre == (i - k + 1) * (j - l + 1))
                        ans = max(i - k + 1, ans);
                }
    cout << ans;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
const int NM = 1e2 + 1;
int n, m, ans, a[NM][NM], dp[NM][NM];
int main () {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", a[i] + j);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j]) {
                dp[i][j] = 1;
                if ((i - 1) * (j - 1) == 0) {
                    cout << dp[i][j] << ' ';
                    continue;
                }
                bool flag = true;
                if (dp[i - 1][j]) {
                    for (int k = j - dp[i - 1][j]; k < j; k++)
                        if (!a[i - 1][k]) {
                            flag = false;
                            break;
                        }
                    for (int k = i - dp[i - 1][j] - 1; k <= i; k++)
                        if (!a[k][j - dp[i - 1][j]]) {
                            flag = false;
                            break;
                        }
                    if (flag)
                        dp[i][j] = max(dp[i][j], dp[i - 1][j] + 1);
                }
                if (dp[i][j - 1]) {
                    flag = true;
                    for (int k = i - dp[i][j - 1]; k < i; k++)
                        if (!a[k][j]) {
                            flag = false;
                            break;
                        }
                    for (int k = j - dp[i][j - 1] - 1; k <= j; k++)
                        if (!a[i - dp[i][j - 1]][k]) {
                            flag = false;
                            break;
                        }
                    if (flag)
                        dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1);
                }
            }
            cout << dp[i][j] << ' ';
            ans = max(ans, dp[i][j]);
        }
        cout << endl;
    }
    cout << ans;
    return 0;
}
*/