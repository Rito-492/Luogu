#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, l, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &l);
        ans ^= l;
    }
    printf("%d", ans);
    return 0;
}