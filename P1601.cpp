#include<bits/stdc++.h>
using namespace std;
int l1,l2,a[510],b[510],c[510];
char a1[510],b1[510];
int main(){
	cin>>a1>>b1;
	l1=strlen(a1),l2=strlen(b1);
	for(int i=0;i<l1;i++)
		a[l1-i]=a1[i]-'0';
	for(int i=0;i<l2;i++)
		b[l2-i]=b1[i]-'0';
	l1=max(l1,l2);
	for(int i=1;i<=l1;i++){
		c[i]+=a[i]+b[i];
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	if(c[l1+1])
		printf("%d",c[l1+1]);
	for(int i=l1;i>0;i--)
		printf("%d",c[i]);
	return 0;
}
