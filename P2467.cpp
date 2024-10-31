#include <bits/stdc++.h>
using namespace std;
const int N = 4200 + 1;
int n, p, dp[N][N]; //dp[i][j]第i个选第j段山脉
int main () {
    cin >> n >> p;
    
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
const int N = 4200 + 1;
int n, p, ans;
bool vis[N];
void dfs(int dep, int k, bool isPeak) {
    if (dep == n) {
        ans = (ans + 1) % p;
        return ;
    }
    vis[k] = true;
    if (isPeak) {
        for (int i = 1; i < k; i++)
            if (!vis[i])
                dfs(dep + 1, i, false);
    }
    else {
        for (int i = n; i > k; i--)
            if (!vis[i])
                dfs(dep + 1, i, true);
    }
    vis[k] = false;
}
int main () {
    cin >> n >> p;
    for (int i = 1; i <= n; i++) {
        dfs(1, i, false);
        dfs(1, i, true);
    }
    cout << ans;
    return 0;
}*/