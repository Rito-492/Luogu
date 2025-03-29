#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL k, arr[11], ans = 1;
bool u[11][11], vis[11];
vector<int> adj[11];
void dfs(int x) {
    vis[x] = true;
    for (auto it : adj[x])
        if (!vis[it])
            dfs(it);
}
int main () {
    
    string n;
    cin >> n >> k;
    while (k--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for (int i = 0; i < 10; i++) {
        fill(vis, vis + 11, false);
        dfs(i);
        for (int j = 0; j < 10; j++)
            arr[i] += vis[j];
    }
    for (int i = 0; i < n.size(); i++)
        ans *= arr[n[i] - '0'];
    cout << ans << endl;
    return 0;
}