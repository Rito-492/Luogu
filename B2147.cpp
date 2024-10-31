#include<bits/stdc++.h>
using namespace std;
int main(){
	double x;
	int n;
	scanf("%lf%d",&x,&n);
	for(int i=1;i<=n;i++)
		x=sqrt(i+x);
	printf("%.2lf",x);
	return 0;
}
