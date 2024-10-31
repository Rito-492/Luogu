#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=-1,k,x,a[10010];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=2;i<=n;i++){
		k=i,x=1;
		while((a[k-1]+1)==a[k])
			x++,k--;
		m=max(m,x);
	}
	printf("%d",m);
	return 0;
}
