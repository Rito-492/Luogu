#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e3 + 10;
LL prime[N], cnt;
bool isComposite[N];
void Euler_Sieve() {
    for (LL i = 2; i < N; i++) {
        if (!isComposite[i])
            prime[++cnt] = i;
        for (LL j = 1; j <= cnt && i * prime[j] < N; j++) {
            isComposite[i * prime[j]] = true;
            if (prime[j] % i == 0)
                break;
        }
    }
}
int main () {

    Euler_Sieve();
    
    LL n, dp[N];
    memset(dp, 0, sizeof(dp));
    cin >> n;
    dp[0] = 1;
    LL mp = lower_bound(prime + 1, prime + cnt + 1, n) - prime;
    for (LL i = 1; i <= mp; i++)
        for (LL j = prime[i]; j <= n; j++)
            dp[j] += dp[j - prime[i]];
    cout << dp[n];
    return 0;
}