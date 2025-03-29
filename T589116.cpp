#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
map <int, bool> mp;
int a[20] = {0, 2, 4, 8, 1, 3, 6, 1, 2, 5, 1},
    b[20] = {5, 2, 1, 6, 3, 1, 7, 3, 1, 9, 4};
int main () {
    int x = 1, y = 0, ans = 10, cnt = 1000;
    while (cnt--) {
        x = (x == 10) ? 1 : x + 1;
        y = (y == 10) ? 1 : y + 1;
        if (!mp[a[x] * b[y]]) {
            ans += a[x] * b[y];
            mp[a[x] * b[y]] = true;
        }
    }
    cout << ans << endl;
    return 0;
}
/*
2
4
8
1
3
6
1
2
5
1

5
2
1
6
3
1
7
3
1
9
4
*/