#include <bits/stdc++.h>
using namespace std;
const long long N = 32768;
long long t, n, dp[N + 10][6];
int main () {
    dp[0][0] = 1;
    for (int i = 1; i * i <= N; i++) {
        for (int j = i * i; j <= N; j++) {
            for (int k = 1; k <= 4; k++)
                dp[j][k] += dp[j - i * i][k - 1];
            dp[j][5] = dp[j][1] + dp[j][2] + dp[j][3] + dp[j][4];
        }
    }
    cin >> t;
    while (t) {
        cin >> n;
        cout << dp[n][5] << endl;       
        t--;
    }
    return 0;
}