#include<bits/stdc++.h>
using namespace std;
int x,b=0,g=0,it=0,s=-1;
void f(int z,int gendar){
	if(s==-1)
		s=gendar;
	else
		if(s!=gendar)
			s=gendar,it=0;
	if(gendar==1)
		if(it==0)
			b++,it=z;
		else
			if((it+1)!=z)
				b++,it=z;
			else
				it=z%3;
	else
		if(it==0)
			g++,it=z;
		else
			if((it+1)!=z)
				g++,it=z;
			else
				it=z%4;
}
int main(){
	char c;
	while(1){
		c=getchar();
		switch(c){
			case 'b':x=1;f(x,1);break;
			case 'o':x=2;f(x,1);break;
			case 'y':x=3;f(x,1);break;
			case 'g':x=1;f(x,0);break;
			case 'i':x=2;f(x,0);break;
			case 'r':x=3;f(x,0);break;
			case 'l':x=4;f(x,0);break;
			case '.':break;
			default:printf("%d\n%d",b,g);return 0;
		}
	}
	return 0;
}
