#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,b[110]={0},c[11]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		c[x]++;
		for(int j=0;j<x;j++)
			b[i]+=c[j];
	}
	for(int i=1;i<n;i++)
		printf("%d ",b[i]);
	printf("%d",b[n]);
	return 0;
}
