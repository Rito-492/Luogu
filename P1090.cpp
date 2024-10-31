#include <bits/stdc++.h>
using namespace std;
int main () {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, a, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        pq.push(a);
    }
    for (int i = 1; i < n; i++) {
        int s;
        s = pq.top(), pq.pop();
        s += pq.top(), pq.pop();
        pq.push(s);
        ans += s;
    }
    cout << ans;
    return 0;
}