#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	bool flag=false;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		swap(a,b);
	if(b>c)
		swap(b,c);
	if(a>b)
		swap(a,b);
	while(!flag){
		flag=true;
		for(int i=2;i<=sqrt(a);i++)
			if(!(c%i)&&!(a%i)){
				c/=i,a/=i,flag=false;
				break;
			}
	}
	printf("%d/%d",a,c);
	return 0;
}
