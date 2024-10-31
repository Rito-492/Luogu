#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n,m,x,s1[30],s2[30],u1[30],u2[30];
	scanf("%d%d%d%d",&a,&n,&m,&x);
	s1[1]=s1[2]=1;
	s2[1]=s2[2]=0;
	u1[1]=u2[2]=1;
	u1[2]=u2[1]=0;
	for(int i=3;i<n;i++){
		u1[i]=u1[i-1]+u1[i-2];
		s1[i]=s1[i-1]+u1[i-2];
		u2[i]=u2[i-1]+u2[i-2];
		s2[i]=s2[i-1]+u2[i-2];
	}
	b=(m-a*s1[n-1])/s2[n-1];
	printf("%lld",a*s1[x]+b*s2[x]);
	return 0;
}
