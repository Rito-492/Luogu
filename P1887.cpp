#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a,b,x;
	scanf("%lld%lld",&n,&m);
	a=n/m;
	b=n%m;
	x=m-b;
	for(long long i=1;i<=x;i++)
		printf("%lld ",a);
	if(b!=0){
		a++;
		for(long long i=1;i<b;i++)
			printf("%lld ",a);
		printf("%lld",a);
	}	
	return 0;
}

