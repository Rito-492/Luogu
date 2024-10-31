#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x=1,y=1,d=1;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		switch(d){
			case 1:
				y++;d++;
				break;
			case 2:
				x++;y--;
				if(y==1)	d++;
				break;
			case 3:
				x++;d++;
				break;
			case 4:
				x--;y++;
				if(x==1)	d=1;
				break;
		}
	printf("%d/%d",x,y);
	return 0;
}
