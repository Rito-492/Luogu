#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,a[110];
	while(cin>>x){
		if(!x)
			break;
		a[++n]=x;
	}
	for(int i=n;i>1;i--)
		printf("%d ",a[i]);
	printf("%d",a[1]);
	return 0;
}
