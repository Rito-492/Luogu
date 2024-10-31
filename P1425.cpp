#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=c-a;
	f=d-b;
	if(d<b)
		f+=60,e--;
	printf("%d %d",e,f);
	return 0;
}
