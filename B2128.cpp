#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}
int main(){
	int n,s=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
		if(prime(i))
			s++;
	printf("%d",s);
	return 0;
}
