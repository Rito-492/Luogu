#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
int main () {
	int n, s = 0, ans = 0, a[N];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s += a[i];
	}
	s /= n;
	for (int i = 1; i <= n; i++) {
		if (a[i] ^ s) {
			a[i + 1] += a[i] - s;
			ans++;
		}
	}
	cout << ans;
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
int main () {
	int n, s = 0, d = 0, ans = 0, a[N];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s += a[i];
	}
	s /= n;
	bool flag = false;
	int maxi = 0;
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		maxi = (a[maxi] < a[i]) ? i : maxi;
		d += (a[i] > s) ? a[i] - s : 0;
	}
	while (d) {
		int d3 = 0, d4;
		for (int i = 1; i <= maxi; i++)
			d3 += (a[i] < s) ? s - a[i] : 0;
		d4 = d - d3;
		if (a[maxi] - s >= d3) {
			a[maxi - 1] += d3;
			a[maxi + 1] += a[maxi] - s - d3;
		}
		else {
			a[maxi - 1] += a[maxi] - s - d3;
			a[maxi + 1] += d3;
		}
		a[maxi] = s;
		if (d3 == 0 || d4 == 0)
			ans ++;
		else
			ans += 2;
		d = 0;
		for (int i = 1; i <= n; i++) {
			maxi = (a[maxi] < a[i]) ? i : maxi;
			d += (a[i] > s) ? a[i] - s : 0;
		}
	}
	cout << ans;
	return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 1;
struct node {
	int num, a;
}arr[N];
bool cmp(node x, node y) {
	return (x.a == y.a) ? x.num > y.num : x.a < y.a;
}
int main () {
	int n, s = 0, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >>arr[i].a;
		arr[i].num = i;
		s += arr[i].a;
	}
	s /= n;
	sort(arr + 1, arr + n + 1, cmp);
	bool flag = false;
	int maxi = n, mini = 1;
	while (!flag) {
		while (arr[maxi].a == s) {
			maxi--;
		}
		while (arr[mini].a == s) {
			mini++;
		}
		ans += abs(arr[maxi].num - arr[mini].num);
		if (arr[maxi].a - s > s - arr[mini].a)
			arr[maxi].a -= s - arr[mini].a, arr[mini].a = s;
		else {
			arr[mini].a += arr[maxi].a - s, arr[maxi].a = s;
		}
		flag = true;
		for (int i = 1; i <= n; i++)
			if (arr[i].a ^ s) {
				flag = false;
				break;
			}
	}
	cout << ans << endl;
	return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,flag,l=0,r,s=0,a[110]={0},t[2000][110],step[2000]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		t[1][i]=a[i];
		l=(a[l]<a[i])?i:l;
		s+=a[i];
	}
	s/=n,t[1][0]=l,t[1][n+1]=-1,l=r=1;
	while(l<=r){
		flag=1;
		for(int i=1;i<=n;i++)
			if(t[l][i]!=s){
				flag=0;
				break;
			}
		if(flag){
			printf("%d",step[l]);
			return 0;
		}
		//if(t[l][t[l][0]]>s){
			if(t[l][t[l][0]-1]<t[l][t[l][0]+1]){
				if(t[l][0]-1>0){
					r++;
					t[r][0]=t[l][0]-1;
					for(int i=1;i<=n+1;i++)	t[r][i]=t[l][i];
					t[r][t[r][0]]+=t[r][t[l][0]]-s;
					t[r][t[l][0]]=s;
					m=n+1;
					for(int i=1;i<=n;i++)
						if(t[r][i]>t[r][m])
							m=i;
					if(t[r][t[r][0]]<t[r][m])
						t[r][0]=m;
					step[r]=step[l]+1;
				}
				if(t[l][0]-1>0&&t[l][t[l][0]-1]<s){
					r++;
					t[r][0]=t[l][0]-1;
					for(int i=1;i<=n;i++)
						t[r][i]=t[l][i];
					t[r][t[l][0]]-=s-t[r][t[r][0]];
					t[r][t[r][0]]=s;
					m=n+1;
					for(int i=1;i<=n;i++)
						if(t[r][i]>t[r][m])
							m=i;
					if(t[r][t[r][0]]<t[r][m])
						t[r][0]=m;
					step[r]=step[l]+1;
				}
			}else{
				if(t[l][0]+1<=n){
					r++;
					t[r][0]=t[l][0]+1;
					for(int i=1;i<=n;i++)
						t[r][i]=t[l][i];
					t[r][t[l][0]+1]+=t[r][t[l][0]]-s;
					t[r][t[l][0]]=s;
					m=n+1;
					for(int i=1;i<=n;i++)
						if(t[r][i]>t[r][m])
							m=i;
					if(t[r][t[r][0]]<t[r][m])
						t[r][0]=m;
					step[r]=step[l]+1;
				}
				if(t[l][0]+1<=n&&t[l][t[l][0]+1]<s){
					r++;
					t[r][0]=t[l][0]+1;
					for(int i=1;i<=n;i++)
						t[r][i]=t[l][i];
					t[r][t[l][0]]-=s-t[r][t[r][0]];
					t[r][t[r][0]]=s;
					step[r]=step[l]+1;
					m=n+1;
					for(int i=1;i<=n;i++)
						if(t[r][i]>t[r][m])
							m=i;
					if(t[r][t[r][0]]<t[r][m])
						t[r][0]=m;
				}
			}
		//}
		//for(int i=1;i<=n;i++)
		//	printf("%d ",t[l][i]);
		//printf("%d %d\n",step[l],t[l][0]);
		l++;
	}
	return 0;
}
*/