#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

/*
认真在草稿本上写完再开始写代码啊魂淡！
不然一直搞错，实际上或许能早一点写出来的
虽然平方和公式不记得
*/

int main () {
    cin.sync_with_stdio(0);
    
    LL t, l ,r, n1, n2, m1, m2, ans;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        ans = 0;
        n1 = (1 + sqrt(8 * l - 7)) / 2;
        n2 = (1 + sqrt(8 * r - 7)) / 2;
        m1 = (n1 * (n1 - 1) >> 1) + 1;
        m2 = (n2 * (n2 - 1) >> 1) + 1;
        if (n1 == n2) {
            ans = (l - m1 + r - m1 + 2) * (r - l + 1) / 2;
            cout << ans << endl;
            continue;
        }
        if (n2 > n1 + 1)
            ans += ((n1 + n2) * (n2 - n1 - 1) / 2 + (n2 - 1) * n2 * (2 * n2 - 1) / 6 - n1 * (n1 + 1) * (2 * n1 + 1) / 6) >> 1;
        ans += (l - m1 + 1 + n1) * (m1 + n1 - l) >> 1;
        ans += (2 + r - m2) * (r - m2 + 1) >> 1;
        cout << ans << endl;
    }
    return 0;
}