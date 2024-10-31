#include<bits/stdc++.h>
using namespace std;
int n,m,x,a[1000010];
int search(int y){
	int l=1,r=n,mid,ans=-1;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]<y)
			l=mid+1;
		else
			r=mid-1;
		if(a[mid]==y)
			ans=mid;
	}
	return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	for(int i=1;i<=m;i++){
		scanf("%d",&x);
		printf("%d ",search(x));
	}
	return 0;
}
