#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag;
	int n,m,x,y,a,b,s,w,x1[110],x2[110],y1[110],y2[110];
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(int i=1;i<=x;i++)
		scanf("%d%d%d%d",x1+i,y1+i,x2+i,y2+i);
	for(int i=1;i<=y;i++){
		scanf("%d%d",&a,&b);
		flag=false,s=0;
		for(int j=1;j<=x;j++)
			if(a>=x1[j]&&a<=x2[j]&&b>=y1[j]&&b<=y2[j])
				flag=true,s++,w=j;
		if(flag)
			printf("Y %d %d\n",s,w);
		else
			printf("N\n");
	}
	return 0;
}
