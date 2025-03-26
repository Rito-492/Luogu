#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main () {
    LL w, m, n, ans = 0;
    cin >> w >> m >> n;
    ans += abs(m / w - n / w);
    LL x1, x2;

    if ((n / w) & 1)
        x1 = w - n % w + 1;
    else
        x1 = n % w;

    if (n % w == 0)
        if (n / w & 1)
            x1 = w;
        else
            x1 = 1;

    if ((m / w) & 1)
        x2 = w - m % w + 1;
    else
        x2 = m % w;

    if (m % w == 0)
        if (m / w & 1)
            x2 = w;
        else
            x2 = 1;

    ans += abs(x1 - x2);
    cout << ans;
    return 0;
}