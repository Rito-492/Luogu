#include<bits/stdc++.h>
using namespace std;
int t;
int gcd(int x,int y){
	t=x%y;
	return t?gcd(y,t):y;
}
int main(){
	int x,y,xy,l,g,p,q,s=0;
	scanf("%d%d",&x,&y);
	xy=x*y;
	for(p=x;p<=y;p+=x)
		if(xy%p==0){
			q=xy/p;
			if(gcd(p,q)==x)
				s++;
		}
	printf("%d",s);
	return 0;
}
//p*q/x=y
