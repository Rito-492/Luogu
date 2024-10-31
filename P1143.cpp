#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n,m=0,t=0,ans[1000];
	char x[1000];
	scanf("%d%s%d",&a,x,&b);
	n=strlen(x);
	for(int i=n-1;i>=0;i--)
		m+=pow(a,n-i-1)*(x[i]-((x[i]>='A')?('A'-10):'0'));
	while(m>0)
		ans[++t]=m%b,m/=b;
	for(int i=t;i>0;i--)
		printf("%c",(ans[i]<10)?(ans[i]+'0'):(ans[i]-10+'A'));
	return 0;
}
