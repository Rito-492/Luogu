#include<bits/stdc++.h>
using namespace std;
int r,a[1010],b[1010],ans;
int read(){
	int x=0,f=1;
	char c=getchar();
	while((c<'0'||c>'9')&&c!='-')	c=getchar();
	if(c=='-')	f=-1,c=getchar();
	while(c>='0'&&c<='9')	x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return x*f;
}
int main(){
	r=read(),a[1]=read(),ans=a[1];
	for(int i=2;i<=r;i++){
		for(int j=1;j<=i;j++){
			b[j]=read();
			b[j]=max(a[j],a[j-1])+b[j];
		}
		for(int j=1;j<=i;j++)
			a[j]=b[j],ans=max(ans,a[j]);
	}
	printf("%d",ans);
	return 0;
}
