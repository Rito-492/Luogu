#include<bits/stdc++.h>
using namespace std;
int i,t=1,m;
float a,b,c,d,l[100000],r[100000],ans[4];
float f(float z){
	return a*z*z*z+b*z*z+c*z+d;
}
int main(){
	scanf("%f%f%f%f",&a,&b,&c,&d);
	l[t]=-100,r[t]=100;
	while(m<3){
		i++;
		if((r[i]-l[i])>0.009){
			t++,r[t]=r[i],l[t]=(r[i]+l[i])/2;
			t++,l[t]=l[i],r[t]=(r[i]+l[i])/2;
		}
		else
			if((f(l[i])*f(r[i]))<0)
				m++,ans[m]=(r[i]+l[i])/2;
	}
	if(ans[1]-ans[2]>1){
		a=ans[1];
		ans[1]=ans[2];
		ans[2]=a;
	}
	if(ans[2]-ans[3]>1){
		a=ans[2];
		ans[2]=ans[3];
		ans[3]=a;
	}
	if(ans[1]-ans[2]>1){
		a=ans[1];
		ans[1]=ans[2];
		ans[2]=a;
	}
	printf("%.2f %.2f %.2f",ans[1],ans[2],ans[3]);
	return 0;
}
