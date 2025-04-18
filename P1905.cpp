#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
int n, p, a[N];
vector<int> ans[N >> 1];
int main () {
    cin.sync_with_stdio(0);
    
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);

    int ptr = 1;    //指明当前需要分配的堆号
    bool isDown = true;
    for (int i = 1; i <= n; i++) {
        if (isDown) {
            ans[ptr++].push_back(a[i]);
            if (ptr > p) {
                isDown = false;
                ptr = p;
            }
        } else {
            ans[ptr--].push_back(a[i]);
            if (ptr < 1) {
                isDown = true;
                ptr = 1;
            }
        }
    }
    for (int i = 1; i <= p; i++) {
        for (auto j : ans[i])
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}