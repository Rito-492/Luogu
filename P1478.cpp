#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,a,b,m=0,ans=0,xx,yy,y[5010];
	scanf("%d%d%d%d",&n,&s,&a,&b);
	a+=b;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&xx,&yy);
		if(xx<=a)
			y[++m]=yy;
	}
	sort(y+1,y+m+1);
	for(ans=1;ans<=m;ans++){
		s-=y[ans];
		if(s<0)
			break;
	}
	printf("%d",ans-1);
	return 0;
}
