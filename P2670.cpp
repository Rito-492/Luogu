#include<bits/stdc++.h>
using namespace std;
int n,m,b[110][110];
char a[110][110];
void put(int x,int y){
	putchar((a[x][y]=='?')?(b[x][y]+'0'):a[x][y]);
}
int main(){
	scanf("%d%d",&n,&m);
	getchar();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=getchar();
			if(a[i][j]=='*'){
				b[i+1][j]++,b[i-1][j]++;
				b[i][j+1]++,b[i][j-1]++;
				b[i+1][j+1]++,b[i-1][j-1]++;
				b[i+1][j-1]++,b[i-1][j+1]++;
			}
		}
		getchar();
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			put(i,j);
		putchar((i==n)?'\0':'\n');
	}
	return 0;
}
