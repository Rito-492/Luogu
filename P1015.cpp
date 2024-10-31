#include<bits/stdc++.h>
using namespace std;
int n,step,l,a[300],b[300];
string c;
int judge(){
	for(int i=1;i<=l/2;i++)
		if(a[i]!=a[l-i+1])
			return 1;
	return 0;
}
void add(){
	for(int i=1;i<=l;i++){
		a[i+1]+=(a[i]+b[i])/n;
		a[i]=(a[i]+b[i])%n;
	}
	if(a[l+1])
		l++;
	for(int i=1;i<=l;i++)
		b[i]=a[l-i+1];
}
int f(){
	if(step>30)
		return 1;
	if(judge()){
		step++;
		add();
		return f();
	}
	else
		return 0;
}
int main(){
	scanf("%d",&n);
	getchar();
	cin>>c;
	l=c.length();
	for(int i=0;i<l;i++){
		a[l-i]=c[i]-'0';
		if(c[i]>='A'&&c[i]<='F')
			a[l-i]-=7;
		b[i+1]+=a[l-i];
	}
	if(f())
		printf("Impossible!");
	else
		printf("STEP=%d",step);
	return 0;
}
