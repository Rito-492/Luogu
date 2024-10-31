#include <bits/stdc++.h>
using namespace std;
const int N = 1e2;
struct node {
    double m, v, p;
}arr[N];
bool cmp(node x, node y) {
    return x.p > y.p;
}
int main () {
    int n;
    double t, ans = 0;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].m >> arr[i].v;
        arr[i].p = arr[i].v / arr[i].m;
    }
    sort(arr + 1, arr + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (arr[i].m >= t) {
            ans += t * arr[i].p;
            break;
        }
        else {
            ans += arr[i].v;
            t -= arr[i].m;
        }
    }
    printf("%.2lf", ans);
    return 0;
}