#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
int main () {
    cin.sync_with_stdio(0);
    
    LL t, l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        LL ans = 0;
        if (2 * l > r) {
            cout << 0 << endl;
        } else {
            ans = (1 + r - 2 * l + 1) * (r - 2 * l + 1) >> 1;
            cout << ans << endl;
        }
        // for (int i = 2 * l; i <= r; i++) {
        //     int p1 = l, p2 = r;
        //     while (p1 < p2) {
        //         while (p1 < p2 && p1 + p2 > i)
        //             p2--;
        //         if (p1 + p2 == i) {
        //             ans++;
        //             if (p1 != p2)
        //                 ans++;
        //         }
        //         p1++;
        //     }
        // }
    }
    return 0;
}

