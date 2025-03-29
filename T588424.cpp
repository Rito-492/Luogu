#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 1e6 + 1;
int T, n, a[N], b[N], balance[N], coins[N], x[N];
bool check(int mid) {
    balance[0] = 0;
    coins[0] = 0;
    int maxa = 0;
    for (int i = 1; i <= n; i++) {
        if (coins[i - 1] < mid) {
            int bought = (mid - coins[i - 1] + a[i]) / a[i];
            coins[i] = coins[i - 1] + bought * a[i] - mid;
            balance[i] = balance[i - 1] + b[i] - bought;
        } else {
            coins[i] = coins[i - 1] - mid;
            balance[i] = balance[i - 1] + b[i];
        }
        if (maxa < a[i]) {
            maxa = a[i];
            coins[i] = coins[i - 1] - mid + (balance[i - 1] + b[i]) * a[i];
            balance[i] = 0;
        }
        if (balance[i] < 0 || coins[i] < 0)
            return false;
    }
    return true;
}
int main () {
    cin.sync_with_stdio(false);

    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        int l = 1, r = 1e6, mid, ans = 0;
        while (l <= r) {
            mid = (l + r) >> 1;
            if(check(mid)) {
                ans = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}