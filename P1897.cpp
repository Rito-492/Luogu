#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100010],t=0,f=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		if(f!=a[i])
			t+=(a[i]-f)*6+5,f=a[i];
	printf("%d",t+n+f*4);
	return 0;
}
