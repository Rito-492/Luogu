#include <bits/stdc++.h>
using namespace std;
const int cost[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
const int N = 1e5 + 1;
const int MAX = 0x3f3f3f3f;
const int INDEX = 10;
int t, n, dp[N];
void f(int i, int j) {
    if (dp[j - cost[i]] == -1)
        return ;
    stack<int> stk;
    int s = dp[j - cost[i]];
    while (s) {
        stk.push(s % 10);
        s /= 10;
    }
    if (i == 0 && !stk.empty()) {
        s = stk.top() * INDEX;
        stk.pop();
        i = MAX;
    }
    while (!stk.empty()) {
        if (i <= stk.top()) {
            s = s * INDEX + i;
            i = MAX;
        }
        else {
            s = s * INDEX + stk.top();
            stk.pop();
        }
    }
    if (i < MAX)
        s = s * INDEX + i;
    if (dp[j] == -1)
        dp[j] = s;
    else
        dp[j] = min(dp[j], s);
}
int main () {
    memset(dp, -1, sizeof(dp));
    dp[2] = 1;
    dp[3] = 7;
    dp[4] = 4;
    dp[5] = 2;
    dp[6] = 6;
    dp[7] = 8;
    for (int i = 0; i < 10; i++) {
        for (int j = cost[i]; j < N; j++) {
            f(i, j);
        }
    }
    for (int i = 1; i <= 40; i++)
        cout << dp[i] << endl;
    //cin >> t;
    while (t) {
        cin >> n;
        cout << dp[n] << endl;
        t--;
    }
    return 0;
}