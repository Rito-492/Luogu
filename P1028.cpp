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
//�ݹ鸴�Ӷ�̫�ߣ����� 
int main(){
	long long n,s=0,a=0,b=2,f[1000]={0};
	scanf("%lld",&n);
	f[1]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i/2;j++)
			f[i]+=f[j];//���ƣ���ͬ쳲��������� 
		f[i]++;
	}
	printf("%lld",f[n]);
	return 0;
}
