#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, ans, f1 = 1, f2 = 2;
    cin >> n;
    if (n == 1)
        ans = 1;
    else
        if (n == 2)
            ans = 2;
        else {
            for (int i = 3; i <= n; i++) {
                ans = f1 + f2;
                f1 = f2, f2 = ans;
            }
        }
    cout << ans << endl;
    return 0;
}