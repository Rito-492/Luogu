#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int main () {
    int n, m, num, sum[N];
    memset(sum, 0, sizeof(sum));
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &num);
        sum[num]++;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= sum[i]; j++)
            printf("%d ", i);
    return 0;
}