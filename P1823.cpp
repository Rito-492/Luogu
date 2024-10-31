#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 5e5 + 1;
LL n, h[N], cnt[N], s;
stack<LL> stk;
int main () {
    cin.sync_with_stdio();
    cin >> n;
    s = n - 1;
    fill (cnt + 1, cnt + n + 1, 1);
    for (LL i = 1; i <= n; i++) {
        cin >> h[i];
        while (!stk.empty() && h[stk.top()] == h[i]) {
            cnt[i] += cnt[stk.top()];
            if (i - stk.top() > 1)
                s++;
            stk.pop();
        }
        while (!stk.empty() && h[stk.top()] < h[i]) {
            s += cnt[stk.top()];
            if (i - stk.top() == 1)
                s--;
            stk.pop();
        }
        stk.push(i);
    }
    while (!stk.empty())    stk.pop();
    for (LL i = n; i > 0; i--) {
        while (!stk.empty() && h[stk.top()] == h[i]) {
            cnt[i] += cnt[stk.top()];
            if (stk.top() - i > 1)
                s++;
            stk.pop();
        }
        while (!stk.empty() && h[stk.top()] < h[i]) {
            s += cnt[stk.top()];
            if (stk.top() - i == 1)
                s--;
            stk.pop();
        }
        stk.push(i);
    }
    cout << s;
    return 0;
}