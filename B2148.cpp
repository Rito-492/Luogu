#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,s;
	int n;
	scanf("%lf%d",&x,&n);
	s=x;
	for(int i=1;i<=n;i++)
		s=x/(i+s);
	printf("%.2lf",s);
	return 0;
}
