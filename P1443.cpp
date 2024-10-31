/*
深搜只能过一个点,TLE
宽搜写半天各种细节错误，哎哎
求单条最短路似乎适合深搜
起点到所有点的最短路适合宽搜
靠， 入队的时候记得标记啊，不然要爆
*/
#include <bits/stdc++.h>
using namespace std;
const int NM = 4e2 + 1;
const int dx[8] = {2, 1, 2, -2, 1, -1, -1, -2};
const int dy[8] = {1, 2, -1, 1, -2, 2, -2, -1};
int n, m, x, y, qx[NM * NM], qy[NM * NM], ans[NM][NM], l = 1, r = 1;
int main () {
	memset(ans, -1, sizeof(ans));
	cin >> n >> m >> x >> y;
	qx[l] = x, qy[l] = y, ans[x][y] = 0;
	while (l <= r) {
		for (int i = 0; i < 8; i++) {
			x = qx[l] + dx[i];
			y = qy[l] + dy[i];
			if (ans[x][y] == -1 && x > 0 && x <= n && y > 0 && y <= m)
				qx[++r] = x, qy[r] = y, ans[x][y] = ans[qx[l]][qy[l]] + 1;
		}
		l++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cout << ans[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
const int NM = 4e2 + 1;
const int INF = 0x3f3f3f3f;
int n, m;
bool vis[NM][NM];
int ans;
void dfs(int x, int y, int i, int j, int step) {
	if (x < 1 || x > n || y < 1 || y > m)
		return ;
	if (x == i && y == j) {
		ans = min(ans, step);
		return ;
	}
	else {
		vis[x][y] = true;
		if (!vis[x + 2][y + 1])
			dfs(x + 2, y + 1, i, j, step + 1);
		if (!vis[x + 1][y + 2])
			dfs(x + 1, y + 2, i, j, step + 1);
		if (!vis[x - 2][y + 1])
			dfs(x - 2, y + 1, i, j, step + 1);
		if (!vis[x - 1][y + 2])
			dfs(x - 1, y + 2, i, j, step + 1);
		if (!vis[x - 2][y - 1])
			dfs(x - 2, y - 1, i, j, step + 1);
		if (!vis[x - 1][y - 2])
			dfs(x - 1, y - 2, i, j, step + 1);
		if (!vis[x + 2][y - 1])
			dfs(x + 2, y - 1, i, j, step + 1);
		if (!vis[x + 1][y - 2])
			dfs(x + 1, y - 2, i, j, step + 1);
		vis[x][y] = false;
	}
}
int main() {
	int x, y;
	cin >> n >> m >> x >> y;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			ans = INF;
			dfs(x, y, i, j, 0);
			if (ans == INF)
				ans = -1;
			cout << ans << ' ';
		}
		cout << endl;
	}
	return 0;
}
*/