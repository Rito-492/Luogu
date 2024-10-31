#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag=true;
	int n,a,m=0,t=0;
	double x,hp=10.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf%d",&x,&a);
		hp-=x;
		flag=hp<=0.0?false:true;
		if(flag){
			hp=hp>10.0?10.0:hp;
			t+=a;
			while(t>=pow(2,m))
				t-=pow(2,m),m++;
		}
	}
	printf("%d %d",m,t);
	return 0;
}
