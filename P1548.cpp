#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,ans1=0,ans2=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(i!=j)
				ans2+=(n-i+1)*(m-j+1);
	while(n>0&&m>0){
		ans1+=n*m;
		n--,m--;
	}
	printf("%d %d",ans1,ans2);
	return 0;
}
