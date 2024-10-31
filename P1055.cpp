#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n=0,t=0;
	cin>>s;
	for(int i=0;i<s.length()-1;i++)
		if(s[i]!='-')
			t++,n+=t*(s[i]-'0');
	n%=11;
	if(n==s[s.length()-1]-'0'||(n==10&&s[s.length()-1]=='X'))
		printf("Right");
	else{
		for(int i=0;i<s.length()-1;i++)
			putchar(s[i]);
		if(n==10)
			printf("X");
		else
			printf("%d",n);
	}
	return 0;
}//¶ÁÌâ°¡°¡°¡°¡°¡°¡°¡ºÃºÃ¶ÁÌâ 
