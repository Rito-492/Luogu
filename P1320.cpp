#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag=false;
	int n=0,s=0,t=0,a[2000];
	char x[210];
	scanf("%s",x);
	n=strlen(x);
	for(int i=0;i<n;i++){
		if(x[i]-'0'!=flag)
			flag=!flag,a[++t]=s,s=0;
		s++;
	}
	for(int i=2;i<=n;i++){
		scanf("%s",x);
		for(int j=0;j<n;j++){
			if(x[j]-'0'!=flag)
				flag=!flag,a[++t]=s,s=0;
			s++;
		}
	}
	printf("%d ",n);
	for(int i=1;i<=t;i++)
		printf("%d ",a[i]);
	printf("%d",s);
	return 0;
}
