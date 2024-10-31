#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
int main () {
    long long t, n, m, q, op, ans;
    cin >> t;
    while (t) {
        cin >> op;
        if (op == 1) {
            cin >> n >> m;
            cout << n + m - 1 << endl;
        }
        if (op == 2) {
            cin >> n >> m >> q;
            ans = ((q + 1 - min(n, m)) % MOD) * (min(n, m) % MOD);
            n %= MOD, m %= MOD;
            cout << (ans % MOD - (n * m) % MOD + MOD) % MOD << endl;
        }
        t--;
    }
    return 0;
}