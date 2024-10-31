#include <bits/stdc++.h>
using namespace std;
int n, k, ans, x[30];
bool vis[30];
bool isPrime(int n) {
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0)
            return false;
    return true;
}
void dfs(int dep, int j, int s) {
    if (dep == k) {
        if (isPrime(s))
            ans++;
    }
    else
        for (int i = j + 1; i <= n; i++)
            dfs(dep + 1, i, s + x[i]);
}
int main () {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    dfs(0, 0, 0);
    cout << ans;
    return 0;
}