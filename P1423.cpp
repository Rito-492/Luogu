#include<bits/stdc++.h>
using namespace std;
int main(){
	float s,x=2.0;
	int n=0;
	scanf("%f",&s);
	while(s>0){
		s-=x;
		x*=0.98;
		n++;
	}
	printf("%d",n);
	return 0;
}
