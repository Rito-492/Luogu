#include <bits/stdc++.h>
using namespace std;
const int N = 3e4 + 1;
const int M = 25 + 1;
int n, m, v[M], p[M], dp[N];
int main () {
    cin >> n >> m;
	for (int i = 1; i <= m; i++)
		cin >> v[i] >> p[i];
	for (int i = 1; i <= m; i++)
		for (int j = n; j >= v[i]; j--)
			dp[j] = max(dp[j], dp[j - v[i]] + v[i] * p[i]);
	cout << dp[n];
    return 0;
}