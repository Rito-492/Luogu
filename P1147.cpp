#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,s;
	scanf("%d",&m);
	for(int i=1;i<=m/2;i++)
		for(int j=i+1;j<=m/2+1;j++){
			s=(i+j)*(j-i+1)/2;
			if(s==m)
				printf("%d %d\n",i,j);
			if(s>m)
				break;
		}
	return 0;
}
