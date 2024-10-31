#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
set<int> adj[N];
int n, m;
bool vis[N];
void BFS() {
	queue<int> q;
	q.push(1);
	vis[1] = true;
	while (!q.empty()) {
		int f = q.front();
		cout << f << ' ';
		for (set<int>::iterator it = adj[f].begin(); it != adj[f].end(); it++)
			if (!vis[*it]) {
				q.push(*it);
				vis[*it] = true;
			}
		q.pop();
	}
}
void DFS(int i) {
	vis[i] = true;
	cout << i << ' ';
	for (set<int>::iterator it = adj[i].begin(); it != adj[i].end(); it++)
		if (!vis[*it])
			DFS(*it);
}
int main () {
	cin.sync_with_stdio();
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].insert(y);
	}
	DFS(1);
	cout << endl;
	memset(vis, false, sizeof(vis));
	BFS();
	return 0;
}
/*
#include<bits/stdc++.h>
#define MAXN 100010
#define MAXM 1000010
using namespace std;
struct edge{
	int u,v;
}e[MAXM];
int n,m,vis[MAXN],ans[MAXN];
int read(){
	int x=0,f=1;
	char c=getchar();
	while((c<'0'||c>'9')&&c!='-')	c=getchar();
	if(c=='-')	f=-1,c=getchar();
	while(c>='0'&&c<='9')	x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return x*f;
}
bool cmp(struct edge x,struct edge y){
	if(x.u==y.u)
		return x.v<y.v;
	else
		return x.u<y.u;
}
void bfs(int s){
	int f=1,r=1;
	ans[1]=s,vis[s]=1;
	fill(vis+1,vis+n+1,0);
	while(f<=r){
		for(int i=1;i<=m;i++)
			if(e[i].u==ans[f]&&!vis[e[i].v])
				ans[++r]=e[i].v,vis[e[i].v]=1;
		f++;
	}
}
void dfs(int s,int k){
	printf("%d ",s);
	for(int i=1;i<=m;i++)
		if(e[i].u==s&&!vis[e[i].v]){
			vis[e[i].v]=1;
			dfs(e[i].v,k);
		}
}
int main(){
	n=read(),m=read();
	for(int i=1;i<=m;i++)
		e[i].u=read(),e[i].v=read();
	sort(e+1,e+n+1,cmp);
	fill(vis+1,vis+n+1,0);
	ans[1]=1,vis[1]=1;
	dfs(1,1);
	putchar('\n');
	bfs(1);
	for(int i=1;i<=n;i++)
		printf("%d ",ans[i]);
	return 0;
}
*/