#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y=0,s=0,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(x>y)
			s++;
		else
			s=1;
		ans=max(ans,s);
		y=x;
	}
	printf("%d",ans);
	return 0;
}
