#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
int n, dp[2 * N][N]; //dp[i][j]前i格放j个红色的方案数
int main () {
	cin >> n;
	dp[1][0] = 0, dp[1][1] = 1;
	for (int i = 2; i <= 2 * n; i++)
		for (int j = (i + 1) / 2; j <= i; j++)
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 100;
			//若这个是黑则方案数dp[i-1][j], 若该格是红则方案数dp[i-1][j-1]
	cout << dp[2 * n][n];
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int n, s[210] , ans[210];
void dfs(int dep) { //深搜20分
	if (dep == 2 * n + 1) {
		return ;
	}
	if (dep > n && s[dep - 1] > n)
		return;
	s[dep] = s[dep - 1] - 1;
	if (s[dep] >= 0 && s[dep] <= n)
		dfs(dep + 1);
	if (s[dep] == 0)
		ans[dep]++;
	s[dep] = s[dep - 1] + 1;
	if (s[dep] >= 0 && s[dep] <= n)
		dfs(dep + 1);
	if (s[dep] == 0)
		ans[dep]++;
	ans[dep] *= ans[dep - 1];
}
int main () {
	cin >> n;
	s[1] = 1, ans[1] = 1;
	for (int i = 2; i <= 2 * n + 1; i++) {
		s[i] = s[i - 1] - 1;
		if (s[i] == 0)
			ans[i]
	}
	cout << ans[2 * n] % 100;
	return 0;
}
*/
/*
i <= red * 2 <= i * 2
*/