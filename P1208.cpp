#include <bits/stdc++.h>
using namespace std;
const int M = 5e3 + 1;
struct farmer {
    int p, a;
};
bool cmp (farmer x, farmer y) {
    return x.p < y.p;
}
int main () {
    int n, m, ans = 0;
    farmer arr[M];
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++)
        scanf ("%d%d", &arr[i].p, &arr[i].a);
    sort(arr + 1, arr + m + 1, cmp);
    for (int i = 1; i <= m; i++) {
        if (n >= arr[i].a) {
            ans += arr[i].a * arr[i].p;
            n -= arr[i].a;
        }
        else {
            ans += arr[i].p * n;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}