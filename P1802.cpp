#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
int main () {
    long long n, x, lose[N], win[N], use[N], dp[N];
    cin >> n >> x;
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        cin >> lose[i] >> win[i] >> use[i];
        //dp[0] += lose[i];
    }
    //fill(dp + 1, dp + n + 1, dp[0]);
    for (int i = 1; i <= n; i++) {          //只选前i个对手
        for (int j = x; j >= use[i]; j--)   //只有j瓶药
            dp[j] = max(dp[j] + lose[i], dp[j - use[i]] + win[i]);
        for (int j = use[i] - 1; j >= 0; j--)   //j < use[i]时只能输
            dp[j] += lose[i];
    }
    cout << 5 * dp[x];
    return 0;
}
/*
经典01背包中并没有考虑 j < use[i]这种情况， 因为放不下就不放
但这里打不过也可以获得经验
记住dp[i][j]是前i件物品容量为j时的最大价值所以j应当要枚举所有
*/