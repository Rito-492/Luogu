#include<bits/stdc++.h>
using namespace std;
bool flag=false;
long long k1,k2,a[27],i,j,m,s;
int main(){
	scanf("%lld",&k1);
	m=k1;
	/*while(1){
		if(flag){
			for(int t=0;t<k1;t++)
				if(!a[t]){
					flag=false;
					break;
				}
			if(flag){
				for(int t=k1;t<k2;t++)
					if(a[t]){
						flag=false;
						break;
					}
				if(flag){
					printf("%lld",m);
					return 0;
				}
			}
		}
		m++,i=-1,j=0,s=0;
		fill(a,a+27,1);
		flag=true;
		while(flag&&s<k1){
			i=(i+1)%k2;
			j+=a[i];
			if(j==m){
				if(i<k1)
					flag=false;
				s++,j=0,a[i]=0;
			}
				
		}
	}*/
	while(1){
		m++,flag=i=s=0,k2=2*k1;
		while(1){
			i=(i+m)%(k2+1);
			k2--;
			if(i<k1){
				flag=false;
				break;
			}
		}
		if(flag){
			printf("%d",m);
			return 0;
		}
	}
	return 0;
}
