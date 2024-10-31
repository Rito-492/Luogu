#include <bits/stdc++.h>
using namespace std;
const int P = 1e4 + 1;
int p[P];
int main () {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int k = i;
        for (int j = 2; k != 1; j++)
            while (k % j == 0)
                k /= j, p[j]++;
    }
    for (int i = 2; i < P; i++)
        if (p[i])
            cout << i << ' ' << p[i] << endl;
    return 0;
}