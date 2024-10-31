#include<bits/stdc++.h>
using namespace std;
int n,m,a[11];
void f(int x){
	while(x>0)
		a[x%10]++,x/=10;
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
		f(i);
	printf("%d %d %d %d %d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	return 0;
}
