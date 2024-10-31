#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n=1;
	double s=1;
	scanf("%d",&k);
	while(s<=k){
		n++;
		s+=(double)1/n;
	}
	printf("%d",n);
	return 0;
}

