#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d,xl,xu,yl,yu;
	scanf("%lld%lld%lld%lld",&xl,&xu,&yl,&yu);
	a=xl*yl;
	b=xu*yu;
	c=xl*yu;
	d=xu*yl;
	if(a>INT_MAX||a<INT_MIN){
		printf("long long int");
		return 0;
	}
	if(b>INT_MAX||b<INT_MIN){
		printf("long long int");
		return 0;
	}
	if(c>INT_MAX||c<INT_MIN){
		printf("long long int");
		return 0;
	}
	if(d>INT_MAX||d<INT_MIN){
		printf("long long int");
		return 0;
	}
	printf("int");
	return 0;
}
//sqrt(2147483648)=46340
