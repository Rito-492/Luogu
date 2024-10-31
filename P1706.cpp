/*
这应该是一个从第一个开始填数的dfs
和我想的并不完全一样
上次那个分解数（作业里的那题）也是
应该存储一条路
达到要求才输出
不然见一个就输出会导致
记录是否使用的数组混乱
哎  菜就多练 

2023.12.05  16:23
卧槽  回溯！！！
太妙了
还是我太菜了
靠
回溯原来是这样回的！！
菜 就多练
多练啊
回溯，嗯，终于有点明白了，原来这样回溯 
*/
#include<bits/stdc++.h>
using namespace std;
int n,a[10],u[10];
void print(){
	for(int i=1;i<n;i++)
		printf("%5d",a[i]);
	printf("%5d\n",a[n]);
}
void dfs(int i){
	if(i==n+1)
		print();
	else
		for(int j=1;j<=n;j++)
			if(u[j]==0){
				a[i]=j;
				u[j]=1;
				dfs(i+1);
				u[j]=0;
			}
}
/*
void dfs(int i,int s){
	if(s==n)
		printf("%5d\n",i);
	else
		for(int j=1;j<=n;j++)
			if(a[j]==0){
				a[j]=1;
				printf("%5d",i);
				dfs(j,s+1);
				a[j]=0;
			}
}
啊啊啊我靠不用两个数组也行啊我靠
只要回溯就行了！！！ 

诶？
不对  这样不行不行！ 
*/
int main(){
	scanf("%d",&n);
	dfs(1);
	return 0;
}
