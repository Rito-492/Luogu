#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	scanf("%d",&x);
	if(!(x%3)&&!(x%5)&&!(x%7))
		printf("3 5 7");
	else
		if(!(x%3)&&!(x%5))
			printf("3 5");
		else
			if(!(x%3)&&!(x%7))
				printf("3 7");
			else
				if(!(x%5)&&!(x%7))
					printf("5 7");
				else
					if(!(x%3))
						printf("3");
					else
						if(!(x%5))
							printf("5");
						else
							if(!(x%7))
								printf("7");
							else
								putchar('n');
	return 0;
}
