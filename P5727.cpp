#include<bits/stdc++.h>
using namespace std;
void f(int x){
	if(x==1)
		printf("1");
	else{
		f((x%2)?(x*3+1):(x/2));
		printf(" %d",x);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}
