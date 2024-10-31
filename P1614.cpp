#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s,ans=300000,a[3010];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	for(int i=1;i<=n-m+1;i++){
		s=0;
		for(int j=i;j<i+m;j++)
			s+=a[j];
		ans=min(s,ans);
	}
	printf("%d",ans);
	return 0;
}
