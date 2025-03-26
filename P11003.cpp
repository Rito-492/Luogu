#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main () {
    cin.sync_with_stdio(false);

    LL T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << ((n % 3) ? n : n * 2) << endl;
    }
    return 0;
}