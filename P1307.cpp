#include<bits/stdc++.h>
using namespace std;
int main(){
	/*int n=0;
	bool m=false,z=false;
	char c,a[200];
	while(1){
		c=getchar();
		if(c=='-'){
			m=true;
		}
		else
			if(c<'0'||c>'9')
				break;
			else
				n++,a[n]=c;
	}
	if(m==true)
		printf("-");
	for(int i=n;i>=1;i--){
		if(a[i]!='0')
			z=true;
		if(z==true)
			printf("%c",a[i]);
	}*/
	int n,m;
	scanf("%d",&n);
	while(n!=0){
		m=m*10+n%10;
		n/=10;
	}
	printf("%d",m);
	return 0;
}
