#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int main () {
    int n, L, k, arr[N];
    cin.sync_with_stdio();
    cin >> L >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int l = 1, r = L, mid, ans;
    while (l <= r) {
        mid = (l + r) / 2;
        int s = 0;
        for (int i = 2; i <= n; i++) {
            int sub = arr[i] - arr[i - 1];
            if (sub > mid) {
                s += sub / mid;
                if (sub % mid == 0)
                    s--;
            }
        }
        if (s > k)
            l = mid + 1;            //若非可行解， 则答案一定更大;
        else
            ans = mid, r = mid - 1; //若为可行解， 则答案可能更小， 需要记录;
    }
    cout << ans;
    return 0;
}