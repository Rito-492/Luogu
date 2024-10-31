#include <bits/stdc++.h>
using namespace std;
const int V_MAX = 2e4 + 1;
const int N_MAX = 30 + 1;
int V, n, v[N_MAX], dp[V_MAX];
int main () {
    cin >> V >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = V; j >= v[i]; j--)
            dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
    cout << V - dp[V];
    return 0;
}
/*
#include <bits/stdc++.h> //暴力深搜竟然也能过
using namespace std;
const int N_MAX = 30 + 1;
int V, n, max_ans, v[N_MAX];
bool vis[N_MAX];
void dfs (int dep, int i, int s) {
    s += v[i];
    vis[i] = true;
    for (int j = i; j <= n; j++)
        if (!vis[j] && s + v[j] <= V)
            dfs(dep + 1, j, s);
    vis[i] = false;
    max_ans = max(max_ans, s);
}
int main () {
    cin >> V >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    dfs(0, 0, 0);
    cout << V - max_ans;
    return 0;
}
*/