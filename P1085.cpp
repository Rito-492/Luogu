#include<bits/stdc++.h>
using namespace std;
int main(){
	int m=0,max=0,a,b;
	for(int i=1;i<=7;i++){
		scanf("%d%d",&a,&b);
		a+=b;
		if(a>8)
			if(max<a){
				max=a;
				m=i;
			}
	}
	printf("%d",m);
	return 0;
}

