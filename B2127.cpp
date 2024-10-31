#include<bits/stdc++.h>
using namespace std;
bool perfect(int x){
	int s=0;
	for(int i=1;i<x;i++)
		if(x%i==0)
			s+=i;
	return s==x?true:false;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
		if(perfect(i))
			printf("%d\n",i);
	return 0;
}
