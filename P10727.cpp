#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 1e2 + 1;
int main () {
    int n, h, w, ans = 0;
    cin >> n;
    while (n--) {
        cin >> h >> w;
        ans = max(ans, h * w);
    }
    cout << ans << endl;
    return 0;
}