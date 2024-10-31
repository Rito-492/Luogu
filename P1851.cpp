#include<bits/stdc++.h>
using namespace std;
void f(int x,int *y){
	for(int i=2;i<=sqrt(x);i++)
		*y+=(x%i)?0:(i+x/i);
	(*y)++;
}
int main(){
	int s,n,m;
	scanf("%d",&s);
	while(1){
		n=m=0;
		f(s,&n);
		if(n!=s){
			f(n,&m);
			if(m==s){
				printf("%d %d",s,n);
				return 0;
			}
		}
		s++;
	}
}
