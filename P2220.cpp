#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MOD = 1e9 + 7;
LL n, m, k;
unordered_map<LL, unordered_set<LL> > mp;
LL quick_pow(LL a, LL b) {
    LL ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * a) % MOD;
        b >>= 1;
        a = (a * a) % MOD;
    }
    return ans;
}
int main () {
    cin.sync_with_stdio(0);
    
    cin >> n >> m >> k;
    for (LL i = 0; i < k; i++) {
        LL x, y;
        cin >> x >> y;
        mp[x].insert(y);
    }

    LL sum = (1 + n) * n >> 1, ans = 1;
    for (auto i : mp) {
        LL tmp = sum;
        for (auto j : i.second)
            tmp -= j;
        ans = (ans * (tmp % MOD)) % MOD;
    }

    ans = (ans * quick_pow(sum % MOD, m - mp.size())) % MOD;
    
    cout << ans << endl;
    return 0;
}
/*
其实应该先从 k = 0 开始考虑，这样或许会更加清晰，而非想到哪写到哪
取模的地方也要注意，尤其是 tmp % MOD
*/