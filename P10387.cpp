#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 1;
const int M = 1e6 + 1;
struct Soldier {
    LL p, c;
};
LL n, S, ps[N], ans;
Soldier soldiers[N];
bool vis[M];

bool cmp (const Soldier &a, const Soldier &b) {
    return a.c > b.c;
}
int main () {
    cin.sync_with_stdio(0);

    cin >> n >> S;
    for (int i = 1; i <= n; i++) 
        cin >> soldiers[i].p >> soldiers[i].c;
    sort(soldiers + 1, soldiers + n + 1, cmp);

    ps[1] = soldiers[1].p;
    for (int i = 2; i <= n; i++)
        ps[i] += ps[i - 1] + soldiers[i].p;
    bool flag = false;
    for (int i = n; i > 0; i--) {
        if (vis[soldiers[i].c]) continue;
        if (flag) {
            ans += ps[i] * (soldiers[i].c - soldiers[i + 1].c);
            vis[soldiers[i].c] = true;
            continue;
        }
        if (ps[i] >= S) {
            ans += S * (soldiers[i].c - soldiers[i + 1].c);
            vis[soldiers[i].c] = true;
        } else {
            flag = true;
            ans += ps[i] * (soldiers[i].c - soldiers[i + 1].c);
            vis[soldiers[i].c] = true;
        }
    }
    cout << ans << endl;
    return 0;
}