#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a, b, p;
LL quick_pow(int a, int b) {
    if (b == 0) //边界条件
        return 1;
    return (b & 1) ? a * quick_pow(a, b - 1) : quick_pow(a * a, b >> 1);
}
LL quick_pow_it(LL a, LL b) {
    LL ans = 1;
    while (b) {
        if (b & 1)
            ans *= a;
        ans %= p;
        a *= a;
        a %= p;
        b >>= 1;
    }
    return ans;
}
int main () {
    cin >> a >> b >> p;
    // printf("%d^%d mod %d=%d", a, b, p, quick_pow(a, b));
    cout << quick_pow(a, b) << endl;
    return 0;
}