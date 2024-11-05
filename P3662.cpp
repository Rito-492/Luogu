#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int n, b, k, s[N];
bool isWork[N];
int main () {
    memset(isWork, true, sizeof(isWork));
    cin >> n >> k >> b;
    for (int i = 1; i <= b; i++) {
        int x;
        cin >> x;
        isWork[x] = false;
    }
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + isWork[i];
    int ans = 0x3f3f3f3f;
    for (int i = 1; i + k - 1 <= n; i++) {
        int sum = s[i + k - 1] - s[i] + isWork[i];
        if (k >= sum)
            ans = min(ans, k - sum);
    }
    cout << ans;
    return 0;
}