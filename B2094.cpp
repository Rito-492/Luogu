#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=-1000001,a[110],s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		m=max(m,a[i]);
	}
	for(int i=1;i<=n;i++)
		if(a[i]!=m)
			s+=a[i];
	printf("%d",s);
	return 0;
}
