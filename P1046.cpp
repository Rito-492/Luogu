#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,n=0,a[10];
	for(int i=1;i<=10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&h);
	h+=30;//优化一点点 
	for(int i=1;i<=10;i++)
		if(a[i]<=h)
			n++;
	printf("%d",n);
	return 0;
}

