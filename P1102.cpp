#include <bits/stdc++.h>
using namespace std;
const long long N = 2e5 + 1;
long long n, c, cnt, ans, a[N];
map<long long, long long> mp;
long long binary_search(long long x) {
	long long l, r, mid;
	l = 1, r = n;
	while (l <= r) {
		mid = (l + r) >> 1;
		if (a[mid] < a[x] + c) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	long long s = 0;
	for (int i = mid; i <= n; i++)
		if (a[x] + c == a[i]) {
			s++;
		}
		else
			break;
	return s;
}
int main () {
	cin.sync_with_stdio();
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		long long tmp;
		cin >> tmp;
		map<long long, long long> :: iterator it = mp.find(tmp);
		if (it == mp.end()) {
			a[++cnt] = tmp;
			mp[tmp] = 1;
		}
		else
			it->second ++;
	}
	sort(a + 1, a + cnt + 1);
	for (int i = 1; i <= cnt; i++) {
		map<long long, long long> :: iterator it = mp.find(a[i] + c);
		if (it != mp.end())
			ans += mp[a[i]] * it->second;
	}
	cout << ans;
	return 0;
}
/*    92分
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c,t=0,s=0,l=1,r,a[200010];  双指针?
	bool flag;
	scanf("%d%d",&n,&c);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	sort(a+1,a+n+1);
	for(int i=2;i<=n;i++)
		if(a[1]+c<=a[i]){
			r=i;
			break;
		}
	for(int i=r;i<=n;i++){
		flag=false;
		for(int j=l;j<i;j++){
			if(a[i]-c==a[j]){
				s++;
				if(!flag){
					l=j;
					flag=true;
				}
			}
			if(a[i]-c<a[j])
				break;
		}
	}
	printf("%d",s);
	return 0;
}
*/