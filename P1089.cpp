#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b,c=0,x=0;
	for(int i=1;i<=12;i++){
		a+=300;
		scanf("%d",&b);
		a-=b;
		if(a<0&&x==0)//读题！！！ 第一个月！！！ 
			x=-i;
		if(a>=100){
			c+=a/100*100;
			a=a%100;
		}
	}
	c=a+c*1.2;
	if(x==0)
		printf("%d",c);
	else	printf("%d",x);
	return 0;
}
