#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0;
	char s[300];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		switch(s[i]){
			case 'a':n++;break;
			case 'b':n+=2;break;
			case 'c':n+=3;break;
			case 'd':n++;break;
			case 'e':n+=2;break;
			case 'f':n+=3;break;
			case 'g':n++;break;
			case 'h':n+=2;break;
			case 'i':n+=3;break;
			case 'j':n++;break;
			case 'k':n+=2;break;
			case 'l':n+=3;break;
			case 'm':n++;break;
			case 'n':n+=2;break;
			case 'o':n+=3;break;
			case 'p':n++;break;
			case 'q':n+=2;break;
			case 'r':n+=3;break;
			case 's':n+=4;break;
			case 't':n++;break;
			case 'u':n+=2;break;
			case 'v':n+=3;break;
			case 'w':n++;break;
			case 'x':n+=2;break;
			case 'y':n+=3;break;		
			case 'z':n+=4;break;
			case ' ':n++;break;
		}
	}
	printf("%d",n);
	return 0;
}
