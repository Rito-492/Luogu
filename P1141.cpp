#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};
int ans[N][N], qx[N * N], qy[N * N], l, r;
char mp[N][N];
bool vis[N][N];
int main () {

	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%s", mp[i]);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (!vis[i][j]) {
				l = 1, r = 1;
				qx[l] = i, qy[l] = j;
				while (l <= r) {
					vis[qx[l]][qy[l]] = true;
					for (int k = 0; k < 4; k++) {
						int x = qx[l] + dx[k], y = qy[l] + dy[k];
						if (x < 1 || x > n || y < 1 || y > n)
							continue;
						if (!vis[x][y] && mp[x][y - 1] != mp[qx[l]][qy[l] - 1]) {
							qx[++r] = x, qy[r] = y;
							vis[x][y] = true;
						}
					}
					l++;
				}
				for (int k = 1; k <= r; k++)
					ans[qx[k]][qy[k]] = r;
			}

	while (m > 0) {
		int i, j;
		scanf("%d%d", &i, &j);
		printf("%d\n", ans[i][j]);
		m--;
	}
	return 0;
}