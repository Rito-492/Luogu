#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 10 + 1;
int f[N] = {1};
map<int, map<char, int> > mp;
int fact(int x) {
    if (f[x] != 0)
        return f[x];
    return f[x] = x * fact(x - 1);
}
int main () {
    cin.sync_with_stdio(0);
    
    string s, tmp;
    int ans = 0;
    cin >> s;
    tmp = s;
    sort(tmp.begin(), tmp.end());
    while (tmp != s && next_permutation(tmp.begin(), tmp.end()))
        ans++;
    // for (int i = 0; i < tmp.size(); i++) {
    //     int cnt = 0;
    //     mp[i][tmp[i]] = 0;
    //     for (int j = 0; j < tmp.size(); j++) {
    //         if (tmp[j] == tmp[i])   continue;
    //         mp[i][tmp[j]] = ++cnt;
    //     }
    // }
    // for (int i = 0; i < s.size() - 1; i++) {
    //     ans += mp[i][s[i]] * fact(s.size() - i - 1);
    // }
    cout << ans << endl;
    return 0;
}