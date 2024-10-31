#include<bits/stdc++.h>
using namespace std;
/*int n,s;
void f(int m){
	if(m>0){
		s++;
		for(int i=1;i<=m/2;i++)
			f(i);
	}
	else
		s++;
}*/
//µÝ¹é¸´ÔÓ¶ÈÌ«¸ß£¡£¡£¡ 
int main(){
	long long n,s=0,a=0,b=2,f[1000]={0};
	scanf("%lld",&n);
	f[1]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i/2;j++)
			f[i]+=f[j];//µÝÍÆ£¡£¡Í¬ì³²¨ÄÇÆõ£¡£¡ 
		f[i]++;
	}
	printf("%lld",f[n]);
	return 0;
}
