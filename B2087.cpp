#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s=0,a[110];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	scanf("%d",&m);
	for(int i=1;i<=n;i++)
		if(m==a[i])
			s++;
	printf("%d",s);
	return 0;
}
