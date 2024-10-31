#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=0,k=0,h[10010];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&h[i]);
	for(int i=2;i<n;i++)
		if(k==0){
			if(h[i-1]>h[i]){
				if(h[i]<h[i+1])
					m++;
				if(h[i]==h[i+1])
					k++,m++;
			}
		}
		else
			if(h[i+1]>h[i]||h[i-1]<h[i])
				k--;
	printf("%d",m);
	return 0;
}
