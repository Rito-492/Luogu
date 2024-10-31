#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,t;
	scanf("%lld",&t);
	for(long long i=1;i<=t;i++){
		scanf("%lld%lld",&n,&k);
		if((1+k)*k>>1<=n)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
