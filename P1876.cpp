#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,m,a;
	scanf("%lf",&n);
	m=floor(sqrt(n));
	for(long long i=1;i<m;i++)
		printf("%lld ",i*i);
	printf("%.0lf",m*m); 
	return 0;
}
