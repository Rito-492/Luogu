#include <bits/stdc++.h>
using namespace std;
const int N = 5e3 + 1;
int n, arr[N], dp[N], ans = 0;
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}