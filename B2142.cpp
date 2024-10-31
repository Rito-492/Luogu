#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	return n==1?1:n+sum(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
