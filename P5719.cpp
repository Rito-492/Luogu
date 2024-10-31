#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,x=0,y=0;
	double a=0.0,b=0.0;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		if(i%k==0)
			a+=i,x++;
		else
			b+=i,y++;
	}
	printf("%.1lf %.1lf",a/x,b/y);
	return 0;
}
