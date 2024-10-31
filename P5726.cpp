#include<bits/stdc++.h>
using namespace std;
int n,score,a[11];
double ans;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&score),a[score]++;
	for(int i=0;i<11;i++)
		if(a[i]>0){
			a[i]--,n--;
			break;
		}
	for(int i=10;i>=0;i--)
		if(a[i]>0){
			a[i]--,n--;
			break;
		}
	for(int i=0;i<11;i++)
		ans+=a[i]*i;
	printf("%.2lf",ans/n);
	return 0;
}
