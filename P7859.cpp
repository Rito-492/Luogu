#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int M = 4e2 + 1;
LL n, m, x[M], y[M], ans;
int main () {
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < (1 << n); i++) {
        bool flag = true;
        for (int j = 1; j <= m && flag; j++)
            if ((i & (1 << (x[j] - 1))) && (i & (1 << (y[j] - 1))))
                flag = false;
        ans += flag;
    }
    cout << ans << endl;
    return 0;
}