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
	for(int i=4;i<=n;i+=2)
		for(int j=2;j<=i;j++)
			if(judge(j)==0&&judge(i-j)==0){
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
	return 0;
}
