#include<bits/stdc++.h>
using namespace std;
int n=0,k,sub1,sub2,sub3;
int judge(int x){
	sub1=x/100;
	sub2=x%10000/1000*100+x%1000/100*10+x%100/10;
	sub3=x%1000;
	return sub1%k+sub2%k+sub3%k;
}
int main(){
	scanf("%d",&k);
	for(int i=10000;i<30000;i++)
		if(judge(i)==0)
			n++,printf("%d\n",i);
	if(judge(30000)==0)
		n++,printf("30000");
	if(n==0)
		printf("No");
	return 0;
}
