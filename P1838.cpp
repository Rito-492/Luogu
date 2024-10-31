#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,x[2]={"xiaoa wins.","uim wins."};
	int j,a[20];
	cin>>s;
	for(int i=0;i<s.length();i++){
		j=s[i]-'0';
		a[j]=i%2;
	}
	if(a[1]==a[4]&&a[4]==a[7]){
		cout<<x[a[1]];
		return 0;
	}
	if(a[2]==a[5]&&a[5]==a[8]){
		cout<<x[a[2]];
		return 0;
	}
	if(a[3]==a[6]&&a[6]==a[9]){
		cout<<x[a[3]];
		return 0;
	}
	if(a[1]==a[2]&&a[2]==a[3]){
		cout<<x[a[1]];
		return 0;
	}
	if(a[4]==a[5]&&a[5]==a[6]){
		cout<<x[a[4]];
		return 0;
	}
	if(a[7]==a[8]&&a[8]==a[9]){
		cout<<x[a[7]];
		return 0;
	}
	if(a[1]==a[5]&&a[5]==a[9]){
		cout<<x[a[1]];
		return 0;
	}
	if(a[3]==a[5]&&a[5]==a[7]){
		cout<<x[a[1]];
		return 0;
	}
	printf("drew.");
	return 0;
}
