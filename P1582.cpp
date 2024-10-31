#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, m, s, ans = 0;
    cin >> n >> k;
    while (1) {
        m = n, s = 0;
        while(m > 0) {
            s += m & 1;
            m >>= 1;
        }
        if (s <= k)
            break;
        ans += n & (-n);
        n += n & (-n);
    }
    cout << ans;
    return 0;
}
//n + ans = a0*2^0 + a1*2^1 + a2*2^2 +...+ ak*2^k