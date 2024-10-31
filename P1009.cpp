#include<stdio.h>
int n,s[1000],a[1000]={0,1},b[1000],l1=1,l2;
void multipy(int x){
	int c=x/10,d=x%10;
	for(int i=1;i<=1000;i++)	b[i]=0;
	for(int i=1;i<=l1;i++){
		b[i]+=a[i]*d;
		b[i+1]+=b[i]/10;
		b[i]%=10;
	}    
	for(int i=1;i<=l1;i++){
		b[i+1]+=a[i]*c;
		b[i+2]+=b[i+1]/10;
		b[i+1]%=10;
	}
	l1+=!(b[l1+1]==0)+!(b[l1+2]==0);
	b[l1]+=b[l1-1]/10;
	b[l1-1]%=10;
	for(int i=l1;i>0;i--)
		a[i]=b[i];
}
void add(){
	for(int i=1;i<=l1;i++){
		s[i]+=b[i];
		s[i+1]+=s[i]/10;
		s[i]%=10;
	}
	l2=l1+!(s[l1+1]==0);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		multipy(i),add();
	for(int i=l2;i>0;i--)
		printf("%d",s[i]);
	return 0;
}
