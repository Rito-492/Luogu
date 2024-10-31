#include <bits/stdc++.h>
using namespace std;
const int TMAX = 1e3 + 1;
const int MMAX = 1e2 + 1;
int T, M, t[MMAX], v[MMAX], dp[TMAX];
int main () {
    cin >> T >> M;
    for (int i = 1; i <= M; i++)
        cin >> t[i] >> v[i];
    for (int i = 1; i <= M; i++)
        for (int j = T; j >= t[i]; j--)
            dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
    cout << dp[T];
    return 0;
}