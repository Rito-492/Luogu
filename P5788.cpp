#include <bits/stdc++.h>
using namespace std;
const int N = 3e6 + 1;
int n, a[N], f[N];
stack<int> stk;
int main () {
    cin.sync_with_stdio();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        while (!stk.empty() && a[stk.top()] < a[i]) {
            f[stk.top()] = i;
            stk.pop();
        }
        stk.push(i);
    }
    while (!stk.empty()) {
        f[stk.top()] = 0;
        stk.pop();
    }
    for (int i = 1; i <= n; i++)
        cout << f[i] << ' ';
    return 0;
}