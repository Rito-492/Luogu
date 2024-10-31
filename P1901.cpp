#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
int n, h[N], v[N], ans[N];
stack<int> stk;
int main () {
    cin.sync_with_stdio();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> h[i] >> v[i];
        while (!stk.empty() && h[stk.top()] < h[i])
            ans[i] += v[stk.top()], stk.pop();
        stk.push(i);
    }
    while (!stk.empty())    stk.pop();
    int maxv = 0;
    for (int i = n; i > 0; i--) {
        while (!stk.empty() && h[stk.top()] < h[i])
            ans[i] += v[stk.top()], stk.pop();
        stk.push(i);
        maxv = max(maxv, ans[i]);
    }
    cout << maxv;
    return 0;
}