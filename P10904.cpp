#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m, a[N];

int main () {
    cin.sync_with_stdio(0);
    
    cin >> n >> m;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 0)
            flag = true;
    }
    if (!flag)
        a[++n] = 0;
    sort(a + 1, a + n + 1);
    
    int ans = 0;
    int x0 = lower_bound(a + 1, a + n + 1, 0) - a;
    for (int i = 1; i <= n; i++) {
        if (abs(a[i]) > m)
            continue;
        if (a[i] < 0) {
            if (-a[i] >= (m + 1) >> 1) {
                ans = max(ans, x0 - i + 1);
            } else {
                int x1 = lower_bound(a + 1, a + n + 1, m + 2 * a[i]) - a;
                if (x1 == n + 1)
                    x1 = n;
                if (a[x1] > m + 2 * a[i])
                    x1--;
                ans = max(ans, x1 - i + 1);
            }
        } else {
            if (a[i] >= (m + 1) >> 1) {
                ans = max(ans, i - x0 + 1);
            } else {
                int x1 = lower_bound(a + 1, a + n + 1, 2 * a[i] - m) - a;
                ans = max(ans, i - x1 + 1);
            }
        }
    }
    if (!flag)  ans--;
    cout << ans << endl;
    return 0;
}