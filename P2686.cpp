#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 1e3 + 1;
int n, a[N], b[N], as[N], bs[N];
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], as[i] = as[i - 1] + a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i], bs[i] = bs[i - 1] + b[i];
    for (int i = 1; i <= n; i++) {
        
    }
    return 0;
}