#include <bits/stdc++.h>
using namespace std;
int main () {
    int m, n, word, ans = 0, q[1000], l = 0, r = 0;
    bool flag;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> word;
        flag = false;
        for (int j = l; j < r; j++)
            if (q[j] == word) {
                flag = true;
                break;
            }
        if (!flag) {
            ans++;
            if (r - l == m)
                l++;
            q[r++] = word;
        }
    }
    cout << ans;
    return 0;
}