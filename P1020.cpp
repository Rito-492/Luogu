#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,n=1,s=0,l=0,m=0,ans1,ans2,a[100010];
	scanf("%d",a+1);
	while(cin>>x){
		a[++n]=x;
		if(x>a[n-1]){
			m=max(l,m);
			l=1;
		}
		else
			l++;
	}
	printf("%d",m);
	return 0;
}
