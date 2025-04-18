#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 1e2 + 1;
int n, v[N];
string s[N], ans[N];
bool vis[N], flag;
void dfs(int k, int dep) {
    if (flag)
        return ;
    if (dep == n) {
        flag = true;
        ans[dep] = s[k];
        for (int i = 1; i <= n; i++)
            cout << ans[i] << endl;
        return ;
    }
    vis[k] = true;
    ans[dep] = s[k];
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (v[i] == 1 && i > dep + 1)
                dfs(i, dep + 1);
            else if (v[i] == -1 && i < dep + 1)
                dfs(i, dep + 1);
            else if (v[i] == 0 && i == dep + 1)
                dfs(i, dep + 1);
            if (flag)
                return ;
        }
    }
    vis[k] = false;
}
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string tmp;
        cin >> s[i] >> tmp;
        if (tmp == "UP")
            v[i] = -1;
        else if (tmp == "DOWN")
            v[i] = 1;
        else
            v[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] == 0)
            ans[i] = s[i];
        else if (v[i] == 1) {
            for (int j = 1; j < i; j++)
                if (ans[j] == "") {
                    ans[j] = s[i];
                    break;
                }
        }
        else if (v[i] == -1) {
            for (int j = i + 1; j <= n; j++)
                if (ans[j] == "") {
                    ans[j] = s[i];
                    break;
                }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << endl;
    return 0;
}