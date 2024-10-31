#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,s=0;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=0;i<=1000;i++)
		for(int j=0;j<=1000;j++)
			if(i*a+j*b==c)
				s++;
	printf("%d",s);
	return 0;
}
