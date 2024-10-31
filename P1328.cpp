#include <bits/stdc++.h>
using namespace std;
const int N = 2e2 + 1;
int outcome[5][5] = {
    {0, 0, 1, 1, 0},
    {1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1},
    {0, 0, 1, 0, 1},
    {1, 1, 0, 0, 0}
};
int main () {
    int n, na, nb, a[N], b[N];
    cin >> n >> na >> nb;
    for (int i = 1; i <= na; i++)
        cin >> a[i];
    for (int i = 1; i <= nb; i++)
        cin >> b[i];
    int s1 = 0, s2 = 0, t1 = 0, t2 = 0;
    while (n) {
        t1 = t1 == na ? 1 : t1 + 1;
        t2 = t2 == nb ? 1 : t2 + 1;
        s1 += outcome[a[t1]][b[t2]];
        s2 += outcome[b[t2]][a[t1]];
        n--;
    }
    cout << s1 << ' ' << s2;
    return 0;
}