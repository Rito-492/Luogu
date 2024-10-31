#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y) {
    return (x % y == 0) ? y : gcd(y, x % y);
}
int main() {
    int a1, a2, b1, b2, t;
    scanf("%d/%d%d/%d", &a1, &a2, &b1, &b2);
    t = gcd(a1, a2);
    a1 /= t, a2 /= t;
    t = gcd(b1, b2);
    b1 /= t, b2 /= t;
    a1 *= b1, a2 *= b2;
    t = gcd(a1, a2);
    a1 /= t, a2 /= t;
    cout << a2 << ' ' << a1 << endl;
    return 0;
}