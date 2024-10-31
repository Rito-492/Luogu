#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=0,x,k=0,s=1,a[40010],sum=0;
	scanf("%d",&n);
	k=n*n;
	while(cin>>x){
		m++;
		sum+=x;
		a[m]=x;
		if(sum==k)
			break;
	}
	k=0;
	for(int i=1;i<=m;i++){
		for(int j=0;j<a[i];j++){
			if(s%n==0)
				printf("%d\n",k%2),s++;
			else
				printf("%d",k%2),s++;	
		}
		k++;
	}
	return 0;
}
