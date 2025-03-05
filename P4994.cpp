#include <bits/stdc++.h>
using namespace std;
int main () {
    int m, n = 0, f0 = 0, f1 = 1, f2;
    cin >> m;
    while (1) {
        if (n > 0 && f0 == 0 && f1 == 1) {
            cout << n << endl;
            break;
        }
        f2 = (f0 + f1) % m;
        f0 = f1;
        f1 = f2;
        n++;
    }
    return 0;
}