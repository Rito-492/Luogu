#include <bits/stdc++.h>
using namespace std;
const int N = 13 + 1;
int n, sum, re[N];
bool row[N], col[N], dia1[2 * N], dia2[2 * N];
void dfs(int i, int j) {
    re[i] = j;
    if (i == n) {
        sum++;
        if (sum > 3)
            return ;
        for (int k = 1; k <= n; k++)
            cout << re[k] << ' ';
        cout << endl;
        return ;
    }
    row[i] = true;
    col[j] = true;
    dia1[j - i + N] = true;     //同一对角线坐标有关系
    dia2[i + j] = true;
    for (int k = 1; k <= n; k++)
        if (!col[k] && !dia1[k - i - 1 + N] && !dia2[i + 1 + k])
            dfs(i + 1, k);
    row[i] = false;
    col[j] = false;
    dia1[j - i + N] = false;
    dia2[i + j] = false;
}
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++)
        dfs(1, i);
    cout << sum << endl;
    return 0;
}