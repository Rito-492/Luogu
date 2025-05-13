#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
int n, m, a[N];

bool check(int mid) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] - a[i - 1] > mid)
            cnt += (a[i] - a[i - 1] - 1) / mid;
    return cnt - 1 <= m;
}

int main () {
    cin.sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = 1e8 + 1, ans = INF;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}
/*
这真的配做黄题么
*/