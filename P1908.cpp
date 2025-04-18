#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 5e5 + 1;
LL n, a[N], aux[N], ans;

void merge(LL arr[], const LL& l1, const LL& r1, const LL&l2, const LL& r2) {
    LL i = l1, j = l2;
    for (LL k = l1; k <= r2; k++) {
        if (i > r1)
            aux[k] = arr[j++];
        else if (j > r2)
            aux[k] = arr[i++];
        else if (arr[i] <= arr[j])
            aux[k] = arr[i++];
        else {
            aux[k] = arr[j++];
            ans += r1 - i + 1;
        }
    }
    for (LL k = l1; k <= r2; k++)
        arr[k] = aux[k];
}

void merge_sort(LL arr[], const LL& l, const LL& r) {
    if (l >= r) return;
    LL mid = (l + r) >> 1;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, mid + 1, r);
}

int main () {
    cin.sync_with_stdio(0);

    cin >> n;
    for (LL i = 1; i <= n; i++)
        cin >> a[i];
    merge_sort(a, 1, n);
    cout << ans << endl;
    return 0;
}