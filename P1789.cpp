#include<bits/stdc++.h>
using namespace std;
int n,m,k,x,y,s,a[110][110];
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		for(int j=y;j<=y+4;a[x+2][j]=1,j++);
		for(int j=x;j<=x+4;a[j][y+2]=1,j++);
		a[x+3][y+3]=a[x+1][y+1]=a[x+3][y+1]=a[x+1][y+3]=1;
	}
	for(int i=1;i<=k;i++){
		scanf("%d%d",&x,&y);
		for(int j=x;j<=x+4;j++)
			for(int l=y;l<=y+4;l++)
				a[j][l]=1;
	}
	for(int i=3;i<=n+2;i++)
		for(int j=3;j<=n+2;j++)
			s+=a[i][j];
	printf("%d",n*n-s);
	return 0;
}
