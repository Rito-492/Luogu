#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,l,r,c,a[60][20],s[20];
	while(cin>>n){
		l=1,r=n,c=n*(n-1)/2,s[0]=0;
		for(int i=1;i<=c;i++)
			for(int j=1;j<=n;j++)
				a[i][j]=0;
		for(int i=1;i<=c;i++){
			scanf("%d",&x);
			a[i][l]=a[i][r]=1,a[i][n+1]=x;
			l++;
			s[0]+=a[i][n+1];
			if(l==r)
				l=1,r--;
		}
		if(s[0]%(n-1))
			printf("Impossible");
		else{
			for(int i=1;i<n;i++)
				for(int j=n;j<=c;j++)
					if(a[j][i])
						for(int k=1;k<=n+1;k++)
							a[j][k]-=a[i][k];
			s[n]=a[n][n+1]/(-2);
			for(int i=1;i<n;i++)
				s[i]=a[i][n+1]-s[n];
			sort(s+1,s+n+1);
			if(s[1]<0)
				printf("Impossible");
			else{
				for(int i=1;i<n;i++)
					printf("%d ",s[i]);
				printf("%d",s[n]);
			}
		}	
	}
	return 0;
}
