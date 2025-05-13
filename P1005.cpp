#include <bits/stdc++.h>
using namespace std;
typedef __int128 INT;
const INT N = 80 + 10;
INT n, m, ans, a[N][N], dp[N][N];

__int128 read() {
    __int128 x = 0;
    char c = getchar();
    while (c < '0' || c > '9')   c = getchar();
    while (c >= '0' && c <= '9') {
        x = (x << 1) + (x << 3) + (c ^ 48);
        c = getchar();
    }
    return x;
}

void write(__int128 x) {
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
}

int main () {
    cin.sync_with_stdio(0);
    n = read(), m = read();
    for (INT i = 1; i <= n; i++)
        for (INT j = 1; j <= m; j++)
            a[i][j] = read();
    for (INT i = 1; i <= n; i++) {
        for (INT j = 1; j <= m; j++)
            dp[j][j] = a[i][j];
        for (INT k = 1; k <= m; k++) {
            for (INT l = 1; l <= m - k + 1; l++) {
                INT r = l + k - 1;
                dp[l][r]= max(dp[l][r - 1] * 2 + a[i][r] * 2, dp[l + 1][r] * 2 + a[i][l] * 2);
            }
        }
        ans += dp[1][m];
    }
    write(ans);
    return 0;
}