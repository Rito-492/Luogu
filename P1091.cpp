#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
int main () {
    int n, t[N], dp1[N], dp2[N], ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    fill(dp1, dp1 + N, 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++)
            if (t[i] > t[j])
                dp1[i] = max(dp1[i], dp1[j] + 1);
        fill(dp2, dp2 + N, 1);
        for (int j = i; j <= n; j++) {
            if (t[j] >= t[i]) {
                dp2[j] = 0;
                ans = max(ans, dp1[i] + dp2[j]);
                continue;
            }
            for (int k = i; k < j; k++)
                if (t[j] < t[k] && dp2[k])
                    dp2[j] = max(dp2[j], dp2[k] + 1);
            ans = max(ans, dp1[i] + dp2[j]);
        }
    }
    cout << n - ans;
    return 0;
}