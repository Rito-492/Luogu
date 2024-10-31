#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,k,d=0,u,s,t=0,p[410]={-1},x[410],y[410],maxi;
	scanf("%d%d%d",&m,&n,&k);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			scanf("%d",&u);
			if(u)
				t++,p[t]=u,x[t]=j,y[t]=i;
		}
	for(int i=1;i<=t;i++){
		maxi=0;
		for(int j=i;j<=t;j++)
			if(p[maxi]<p[j])
				maxi=j;
		swap(p[maxi],p[i]);
		swap(x[maxi],x[i]);
		swap(y[maxi],y[i]);
	}
	if((y[1]*2+1)<=k){
		d=y[1]+1,s=p[1];
		for(int i=2;i<=t;i++)
			if((d+abs(x[i]-x[i-1])+abs(y[i]-y[i-1])+y[i]+1)<=k&&(d+y[i-1])<=k)
				s+=p[i],d+=abs(x[i]-x[i-1])+abs(y[i]-y[i-1])+1;
			else
				break;
	}
	printf("%d",s);
	return 0;
}
