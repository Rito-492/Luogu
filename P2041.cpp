#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
int main () {
    cin.sync_with_stdio(0);
    
    LL n, m;
    cin >> n;
    if (n > 2) {
        cout << -1 << endl;
        return 0;
    }
    m = n + n - 1 + (n - 1) * (n - 1);
    cout << m << endl;
    for (LL i = 1; i <= n; i++)
        cout << i << " " << 1 << endl;
    for (LL i = 2; i <= n; i++)
        for (LL j = n; j > 1; j--)
            cout << i << " " << j << endl;
    for (LL i = 2; i <= n; i++)
        cout << 1 << " " << i << endl;
    return 0;
}