#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,ans;
	scanf("%d%d",&n,&k);
	ans=n;
	while(n>=k){
		ans+=n/k;
		n=n/k+n%k;
	}
	printf("%d",ans);
	return 0;
}

