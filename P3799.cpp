#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e5 + 1;
const LL A = 5e3 + 1;
const LL MOD = 1e9 + 7;
LL n, a[N], cnt[A], ans;
int main () {
    cin >> n;
    for (LL i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (LL i = 1; i < A; i++) {
        if (cnt[i] < 2)
            continue;
        LL c = ((cnt[i] - 1) * cnt[i] / 2) % MOD;
        for (LL j = 1; j <= i / 2; j++) {
            if (i - j != j)
                ans += (cnt[j] * cnt[i - j] * c) % MOD;
            else
                ans += ((cnt[j] - 1) * cnt[j] / 2 * c) % MOD;
        }
    }
    cout << ans % MOD;
    return 0;
}