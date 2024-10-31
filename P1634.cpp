#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x,n,s=1,m;
	scanf("%lld%lld",&x,&n);
	for(long long i=1;i<=n;i++)
		s+=s*x;
	printf("%lld",s);
	return 0;
}
