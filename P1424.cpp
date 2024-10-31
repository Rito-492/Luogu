#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,n,s=0;
	scanf("%d%d",&x,&n);
	while(n>0){
		s+=((x==6)||(x==7))?0:250;
		x=(x==7)?1:(x+1);
		n--;
	}
	printf("%d",s);
	return 0;
}
