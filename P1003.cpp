#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=-1,a[10010],b[10010],g[10010],k[10010],x,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	scanf("%d%d",&x,&y);
	for(int i=1;i<=n;i++)
		if(x>=a[i]&&x<=(a[i]+g[i])&&y>=b[i]&&y<=(b[i]+k[i]))
			m=i;
	printf("%d",m);
	return 0;
}
