#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,m,u,v,n=0,a[10010];
	scanf("%d%d",&l,&m);
	fill(a,a+l+1,1);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&u,&v);
		fill(a+u,a+v+1,0);
	}
	for(int i=0;i<=l;i++)
		n+=a[i];
	printf("%d",n);
	return 0;
}

