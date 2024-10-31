#include<bits/stdc++.h>
using namespace std;
int prime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return 1;
	return 0;
}
int main(){
	int i=2,n,s=0;
	scanf("%d",&n);
	while(s<n){
		if(prime(i)==0)
			s++;
		i++;
	}
	printf("%d",i-1);
	return 0;
}
