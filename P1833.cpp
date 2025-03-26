#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 1;
const int MAXT = 1e3 + 1;
int Tsh, Tsm, Teh, Tem, n, t[N], c[N], p[N], dp[MAXT];
int main () {
    scanf("%d:%d %d:%d %d", &Tsh, &Tsm, &Teh, &Tem, &n);
    int T = (Teh - Tsh) * 60 + Tem - Tsm;
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d", t+i, c+i, p+i);
    for (int i = 1; i <= n; i++) {
        if (p[i] == 0) {
            for (int j = t[i]; j <= T; j++)
                dp[j] = max(dp[j], dp[j - t[i]] + c[i]);
        } else {
            for (int j = T; j >= t[i]; j--)
                for (int k = 1; k * t[i] <= j && k <= p[i]; k++)
                    dp[j] = max(dp[j], dp[j - k * t[i]] + k * c[i]);
        }
    }
    cout << dp[T] << endl;
    return 0;
}