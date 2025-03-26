#include <bits/stdc++.h>
using namespace std;
const int M = 1e3 + 1;
const int K = 1e2 + 1;
struct item {
    int a, b;
};
vector<item> arr[K];
int m, n, dp[M];
int main () {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        arr[c].push_back({a, b});
    }
    for (int i = 1; i <= K; i++)
        for (int weight = m; weight >= 0; weight--)
            for (auto it : arr[i])
                if (weight >= it.a)
                    dp[weight] = max(dp[weight], dp[weight - it.a] + it.b);
    cout << dp[m] << endl;
    return 0;
}