#include <bits/stdc++.h>
using namespace std;
const int NM = 20 + 5;
long long bx, by, hx, hy, dp[NM][NM];
bool no_ok[NM][NM];
int dx[]={0,-2,-2,-1,-1,1,1,2,2};
int dy[]={0,1,-1,2,-2,2,-2,1,-1};
int main () {
	cin >> bx >> by >> hx >> hy;
	for (int i = 0; i < 9; i++) {
		int x = hx + dx[i], y = hy + dy[i];
		if (x >= 0 && y >= 0 && x <= bx && y <= by)
			no_ok[x][y] = true;
	}
	if (!no_ok[0][0])
		dp[0][0] = 1;
	for (int i = 0; i <= bx; i++)
		for (int j = 0; j <= by; j++) {
			if (i == 0 && j == 0) continue;
			if (!no_ok[i][j]) {
				if (i == 0)
					dp[i][j] = dp[i][j - 1];
				if (j == 0)
					dp[i][j] = dp[i - 1][j];
				if (i * j)
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	cout << dp[bx][by];
	return 0;
}
/*	暴力深搜
#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,ans=0,a[20][20]={0};
void dfs(int c,int d){
	if(a[c+1][d]==0&&c+1<=n)
		dfs(c+1,d);
	if(a[c][d+1]==0&&d+1<=m)
		dfs(c,d+1);
	if(c==n&&d==m&&a[c][d]==0)
		ans++;
}
int main(){
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a[x][y]=1;
	a[x-1][y-2]=1;
	a[x+1][y-2]=1;
	a[x-2][y-1]=1;
	a[x-2][y+1]=1;
	a[x+2][y+1]=1;
	a[x+2][y-1]=1;
	a[x+1][y+2]=1;
	a[x-1][y+2]=1;
	dfs(0,0);
	printf("%d",ans);
	return 0;
}
*/
