#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=1,m=1;
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
		n*=a[i]-'A'+1;
	for(int i=0;i<b.length();i++)
		m*=b[i]-'A'+1;
	if(n%47==m%47)
		printf("GO");
	else
		printf("STAY");
	return 0;
}
