#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k, pre = -1, cnt = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        cnt++;
        if (k != pre)
            ans = max(ans, cnt), cnt = 0, pre = k;
    }
    cout << ans;
    return 0;
}