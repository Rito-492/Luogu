#include <bits/stdc++.h>
using namespace std;
const int N = 120 + 1;
int s[N][N], rs[N][N];
int main () {
    int n, diff, ans = -0x3f3f3f3f, rect;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> rect;
            rs[i][j] = rs[i][j - 1] + rect;
            s[i][j] = s[i - 1][j] + rs[i][j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k < i; k++)
                for (int l = 1; l < j; l++) {
                    diff = s[i][j] + s[k - 1][l - 1] - s[k - 1][j] - s[i][l - 1];
                    ans = max(ans, diff);
                }
    cout << ans;
    return 0;
}