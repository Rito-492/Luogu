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
	for(int i=2;i<=n;i++)
		if(n%i==0&&prime(i)){
			printf("%d",n/i);
			return 0;
		}
	return 0;
}
