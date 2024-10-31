#include<bits/stdc++.h>
using namespace std;
int judge(int x){
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			if(judge(i)==0&&judge(n/i)==0){
				printf("%d",n/i);
				return 0;
			}
	return 0;
}
