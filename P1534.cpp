#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t1,t2,y=0,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&t1,&t2);
		y=t1+t2+y-8;
		ans+=y;
	}
	printf("%d",ans);
	return 0;
}
