#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,r,n=0,x,m;
	scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		m=i;
		while(m>0){
			x=m%10;
			m/=10;
			if(x==2)
				n++;
		}
	}
	printf("%d",n);
	return 0;
}
