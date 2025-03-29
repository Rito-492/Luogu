#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 10 + 1;
const int M = 1e2 + 1;
int n, m, a[M], b[M], dp[1 << N];
bool in[1 << N];
queue<int> q;
int main () {
    memset(dp, 0x3f, sizeof dp);

    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            int tmp;
            cin >> tmp;
            if (tmp == 1)
                a[i] |= 1 << (j - 1);
            else if (tmp == -1)
                b[i] |= 1 << (j - 1);
        }
    dp[(1 << n) - 1] = 0;
    q.push((1 << n) - 1);
    in[(1 << n) - 1] = true;
    while (!q.empty()) {
        int i = q.front();
        in[i] = false;
        q.pop();
        for (int j = 1; j <= m; j++) {
            int new_i = (i & ~a[j]) | b[j];
            if (dp[new_i] >= dp[i] + 1) {
                dp[new_i] = dp[i] + 1;
                q.push(new_i);  //顺序是有影响的，所以每次更新后都重新入队再次计算
                in[new_i] = true;
            }
                
        }
    }
    // for (int i = (1 << n) - 1; i >= 0; i--) {
    //     for (int j = 1; j <= m; j++) {
    //         int new_i = (i & ~a[j]) | b[j];
    //         dp[new_i] = min(dp[new_i], dp[i] + 1);
    //     }
    // }
    if (dp[0] == INF)
        dp[0] = -1;
    cout << dp[0] << endl;
    return 0;
}
/*
dp[i]代表到达状态i的最小次数
dp[f(i)] = min(dp[f(i)], dp[i] + 1);
*/