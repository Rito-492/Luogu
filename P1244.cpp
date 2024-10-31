#include <bits/stdc++.h>
using namespace std;
const int N = 20 + 1;
const int M = 1e3 + 1;
long long n, m, dp[N][M];
int main () {
    cin >> n >> m;
    cout << (m + 1) * (1 << n);
    return 0;
}