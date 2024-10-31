#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,n,s=0,m=0,x,c,d,a[10010];
	scanf("%d%d",&l,&n);
	fill(a,a+l+2,1);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&x,&c,&d);
		if(x){
			for(int j=c;j<=d;j++)
				if(!a[j])
					a[j]=2;
		}	
		else{
			for(int j=c;j<=d;j++){
				if(a[j]==2)
					m++;
				a[j]=0;
			}
		}		
	}
	for(int i=0;i<=l;i++)	
		if(a[i]==2)
			s++;
	printf("%d\n%d",s,m);
	return 0;
}
