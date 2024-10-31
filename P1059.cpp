#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,m=0,a[1010]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(a[x]==0)
			m++;
		a[x]=1;
	}
	printf("%d\n",m);
	for(int i=1;i<1000;i++)
		if(a[i]==1)
			printf("%d ",i);
	if(a[1000]==1)
		printf("1000");
	return 0;
}
