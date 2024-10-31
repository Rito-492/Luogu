#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int main () {
    int n, m, a, l, r, s[N] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        s[i] = s[i - 1] + a;
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}