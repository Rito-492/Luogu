#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double p;
	scanf("%d",&n);
	if(n<=150)
		p=n*0.4463;
	else
		if(n<=400)
			p=150*0.4463+(n-150)*0.4663;
		else
			p=150*0.4463+250*0.4663+(n-400)*0.5663;
	printf("%.1lf",p);
	return 0;
}
