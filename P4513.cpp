#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 1;
int scr[N], sum[N];
int main () {
    int n, m, k, a, b, p, ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> scr[i];
        sum[i] = sum[i - 1] + scr[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> k;
        ans = -0x3f3f3f3f;
        if (k == 1) {
            cin >> a >> b;
            if (a > b) swap(a, b);
            for (int j = a; j <= b; j++)
                for (int k = j; k <= b; k++)
                    ans = max(ans, sum[k]- sum[j - 1]);
            cout << ans << endl;
        }
        if (k == 2) {
            cin >> p;
            cin >> scr[p];
            sum[p] = sum[p - 1] + scr[p];
            for(int j = p + 1; j <= n; j++)
                sum[j] = sum[j - 1] + scr[j];
        }
    }
    return 0;
}