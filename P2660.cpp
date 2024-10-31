#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main () {
    LL x, y, ans = 0;
    cin >> x >> y;
    while (x && y) {
        if (x <= y) {
            ans += (x << 2) * (y / x);
            y %= x;
        }
        else {
            ans += (y << 2) * (x / y);
            x %= y;
        }
    }
    cout << ans;
    return 0;
}