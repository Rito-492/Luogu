#include <bits/stdc++.h>
using namespace std;
int pow(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n & 1)
        return pow(x * x, n / 2) * x;
    else
        return pow(x * x, n / 2);
}
int main () {
    int n, m, t[1000], num[1000];
    cin >> n;
    m = pow(2, n + 1) - 1;
    n = pow(2, n);
    for (int i = n; i <= m; i++)
        cin >> t[i], num[i] = i - n + 1;
    for (int i = m; i > 0; i -= 2) {
        t[i / 2] = max(t[i], t[i - 1]);
        num[i / 2] = (t[i] < t[i - 1]) ? num[i - 1]: num[i];
    }
    if (t[2] > t[3])  //编号从1开始
        cout << num[3];
    else
        cout << num[2];
    return 0;
}