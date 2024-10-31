#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,m=1000;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		m=(m>x)?x:m;
	}
	printf("%d",m);
	return 0;
}
