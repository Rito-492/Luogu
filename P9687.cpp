#include <bits/stdc++.h>
using namespace std;
int main () {
    int t, n, p;
    cin.sync_with_stdio();
    cin >> t;
    while (t) {
        cin >> n >> p;
        if (n < 2 * p + 1) {
            cout << "-1" << endl;
            t--;
            continue;
        }
        for (int i = 1; i <= n - p * 2 - 1; i++)
            cout << "0";
        for (int i = 1; i <= p; i++)
            cout << "10";
        cout << "1" << endl;
        t--;
    }
    return 0;
}