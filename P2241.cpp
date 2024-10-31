#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, square = 0, rectangle = 0;
    cin >> n >> m;
    rectangle = (1 + n) * n / 2 * (1 + m) * m / 2;
    if (n > m)  swap(n, m);
    while (n > 0) {
        rectangle -= n * m;
        square += n * m;
        n--, m--;
    }
    cout << square << " " << rectangle << endl;
    return 0;
}