#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e6 + 1;
const LL H = 4e5;
LL n, m, h[N];
bool check (LL x) {
    LL cnt = 0;
    for (LL i = 1; i <= n; i++)
        if (h[i] >= x)
            cnt += h[i] - x;
    return cnt >= m;
}
int main () {
    cin.sync_with_stdio(0);

    cin >> n >> m;
    for (LL i = 1; i <= n; i++)
        cin >> h[i];
     LL l = 0, r = H, mid, ans;
    while (l <= r) {
        mid = (l + r) >> 1;
        if(check(mid)) {
            ans = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}