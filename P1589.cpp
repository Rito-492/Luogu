#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 1;
struct segmnt {
    int s, e;
}arr[N];
bool cmp (segmnt a, segmnt b) {
    return a.s < b.s;
}
int main () {
    int n, l, ans = 0, cur = 0;
    scanf("%d%d", &n, &l);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &arr[i].s, &arr[i].e);
    sort(arr + 1, arr + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (cur < arr[i].s) {
            int d = ceil((arr[i].e - arr[i].s) * 1.0 / l);
            ans += d;
            cur = arr[i].s + d * l;
        }
        else if (cur < arr[i].e) {
            int d = ceil((arr[i].e - cur) * 1.0 / l);
            ans += d;
            cur = cur + d * l;
        }
    }
    printf("%d", ans);
    return 0;
}