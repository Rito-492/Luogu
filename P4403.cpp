#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
int T, n, s[N], e[N], d[N], ans = 0;
int main () {
    cin.sync_with_stdio(0);

    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> s[i] >> e[i] >> d[i];
            int tmp = 0, e_tmp = e[i];
            while (s[i] <= e_tmp) {
                tmp |= 1 << e_tmp;
                e_tmp--;
            }
            ans ^= tmp;
        }
        int cnt = 0;
        bool flag = false;
        while (ans) {
            ans >>= 1;
            cnt++;
            if (ans & 1) {
                flag = true;
                break;
            }
        }
        if (flag) {
            int cnt2 = 0;
            for (int i = 1; i <= n; i++) {
                if (cnt >= s[i] && (cnt - s[i]) % d[i] == 0)
                    cnt2++;
            }
            cout << cnt << " " << cnt2 << endl;
        }   
        else
            cout << "Poor QIN Teng:(" << endl;
    }
    return 0;
}