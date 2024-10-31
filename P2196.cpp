#include <bits/stdc++.h>
using namespace std;
const int N = 2e1 + 1;
int n, arr[N], path[N], ansPath[N], cnt, ans;
bool mp[N][N], vis[N];
void dfs(int dep, int s, int k) {
    vis[dep] = true;
    path[k] = dep;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (mp[dep][i] && !vis[i]) {
            dfs(i, s + arr[i], k + 1);
            flag = true;
        }
    }
    if (!flag) {
        if (ans < s) {
            ans = s;
            cnt = k;
            for (int i = 1; i <= cnt; i++)
                ansPath[i] = path[i];
        }
        return ;
    }
    vis[dep] = false;
}
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            cin >> mp[i][j], mp[j][i] = mp[i][j];
    for (int i = 1; i <= n; i++)
        dfs(i, arr[i], 1);
    for (int i = 1; i <= cnt; i++)
        cout << ansPath[i] << ' ';
    cout << endl << ans;
    return 0;
}