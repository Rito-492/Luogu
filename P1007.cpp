#include <bits/stdc++.h>
using namespace std;
int main () {
    int l, n, x, maxt = 0, mint = 0;
    cin >> l >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > l - x + 1) {
            mint = max(mint, l - x + 1);
            maxt = max(maxt, x);
        }
        else {
            mint = max(mint, x);
            maxt = max(maxt, l - x + 1);
        }
    }
    cout << mint << ' ' << maxt;
    return 0;
}