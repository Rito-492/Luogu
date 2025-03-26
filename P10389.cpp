#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e5 + 1;
LL n, k, a[N], arr[N], ans = -1;
double T, v2[N], s[N];
bool check(LL x) {
    for (int i = 1; i <= x; i++)
        arr[i] = a[i];
    sort(arr + 1, arr + x + 1);
    for (LL i = 1; i <= x; i++) {
        v2[i] = v2[i - 1] + arr[i] * arr[i];
        s[i] = s[i - 1] + arr[i];
    }
    for (LL i = k; i <= x; i++) {
        double v_avg = (s[i] - s[i - k]) / k;
        double v2_avg = (v2[i] - v2[i - k]) / k;
        if (v2_avg - v_avg * v_avg < T)
            return true;
    }
    return false;
}
int main () {
    cin.sync_with_stdio(0);

    cin >> n >> k >> T;
    for (LL i = 1; i <= n; i++)
        cin >> a[i];
    LL l = k, r = n, mid;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}