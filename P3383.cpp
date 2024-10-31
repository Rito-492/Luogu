#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 1;
const int K = 1e5;
bool check[N];
int prime[K], cnt;
void euler(int n) {
    memset(check, true, sizeof check);
    check[1] = false;
    for (int i = 2; i <= n; i++) {
        if (check[i])
            prime[++cnt] = i;
        for (int j = 1; j <= cnt && i * prime[j] <= n; j++) {
            check[i * prime[j]] = false;
            if (i % prime[j] == 0)
                break;
        }
    }
}
int main () {
    int n, q, k;
    cin.sync_with_stdio(false);
    cin >> n >> q;
    euler(n);
    for (int i = 1; i <= q; i++) {
        cin >> k;
        cout << prime[k] << endl;
    }
    return 0;
}