#include<bits/stdc++.h>
using namespace std;
int n,k,x,ans,h[30010];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		h[x]=1;
	}
	for(int i=1;i<=30000;i++){
		if(h[i])
			k--;
		if(k==0){
			ans=i;
			break;
		}
	}
	if(!ans)
		printf("NO RESULT");
	else
		printf("%d",ans);
	return 0;
}
