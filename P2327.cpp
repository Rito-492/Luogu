#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 1;
int n, arr[N], dp[N];
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) {
            dp[i] = dp[i - 2];
        }
        if (arr[i] == 1) {
            dp[i] = dp[i - 2] * 2;
        }
        if (arr[i] == 2) {
            dp[i] = dp[i - 2];
        }
        if (arr[i] == 3) {
            dp[i] = dp[i - 2];
        }
    }
    cout << dp[n];
    return 0;
}