/*
��Ӧ����һ���ӵ�һ����ʼ������dfs
������Ĳ�����ȫһ��
�ϴ��Ǹ��ֽ�������ҵ������⣩Ҳ��
Ӧ�ô洢һ��·
�ﵽҪ������
��Ȼ��һ��������ᵼ��
��¼�Ƿ�ʹ�õ��������
��  �˾Ͷ��� 

2023.12.05  16:23
�Բ�  ���ݣ�����
̫����
������̫����
��
����ԭ���������صģ���
�� �Ͷ���
������
���ݣ��ţ������е������ˣ�ԭ���������� 
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
�������ҿ�������������Ҳ�а��ҿ�
ֻҪ���ݾ����ˣ����� 

����
����  �������в��У� 
*/
int main(){
	scanf("%d",&n);
	dfs(1);
	return 0;
}
