#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;

LL ans[21][21][21];

LL w(LL a, LL b, LL c) {

    if (a <= 20 && b <= 20 && c <= 20 && ans[a][b][c] != 0)
        return ans[a][b][c];
    
    if (a <= 0 || b <= 0 || c <= 0)
        return ans[a][b][c] = 1;
    
    if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    
    if (a < b && b < c)
        return ans[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    
    return ans[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

}

int main () {
    LL a, b, c, ans;
    while (cin >> a >> b >> c) {
        if (a == -1 && b == -1 && c == -1)
            break;
        if (a <= 0 || b <= 0 || c <= 0)
            ans = 1;
        else
            ans = w(a, b, c);
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, ans);
    }
    return 0;
}