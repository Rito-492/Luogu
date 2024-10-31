#include<bits/stdc++.h>
using namespace std;
int n,t,x,h[2000010];
double a;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf%d",&a,&t);
		for(int j=1;j<=t;j++)
			x=floor(a*j),h[x]=!h[x];
	}
	for(int i=1;i<=2000010;i++)
		if(h[i]){
			printf("%d",i);
			return 0;
		}
	return 0;
}
