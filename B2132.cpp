#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i+2<=n;i++)
		if(prime(i)&&prime(i+2))
			printf("%d %d\n",i,i+2);
	return 0;
}
