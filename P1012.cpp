#include<bits/stdc++.h>
using namespace std;
int n,s,k,a[30][20],b[30];
void devide(int x,int u){
	s=0;
	while(x>0)
		s++,a[u][s]=x%10,x/=10;
	b[u]=s;
}
int compare(int x,int xb,int y,int yb){
	if(!xb&&yb)
		if(a[y][1]>a[x][b[x]])	return y;
		else	return x;
	if(!yb&&xb)
		if(a[x][1]>a[y][b[y]])	return x;
		else	return y;
	if(!xb&&!yb)	return x;
	if(a[x][xb]>a[y][yb])	return x;
	if(a[y][yb]>a[x][xb])	return y;
	if(a[x][xb]==a[y][yb])	return compare(x,xb-1,y,yb-1);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i][0]);
		devide(a[i][0],i);
	}
	a[0][0]=-1;
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=1;j<=n;j++)
			if(a[k][0]&&a[j][0])
				k=compare(k,b[k],j,b[j]);
		if(a[k][0]>0)	
			printf("%d",a[k][0]);
		a[k][0]=0;
	}
	return 0;
}
