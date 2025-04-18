#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
int ans, cnt;
string s;
int main () {
    cin.sync_with_stdio(0);

    cin >> s;
    int i = 0;
    for (int i = 0; i < s.size(); i++)
        ans += s[i] - '0';
    while (i < s.size()) {
        if (s[i] == '1') {
            int k = i, t = 0;
            while (k + 2 < s.size() && s[k + 1] == '0' && s[k + 2] == '1')
                k += 2, t++;
            if (k - i + 1 == 5 || k - i + 1 == 3)
                ans -= 1;
            else if (k - i + 1 > 5)
                ans -= (k - i + 1 - 3) / 4 + 1;
            if (s[k + 1] == '1' && s[k + 2] == '1')
                i = k + 2;
            else if (s[k + 1] == '0' && s[k + 2] == '0')
                i = k + 3;
            else if (s[k + 1] == '1' && s[k + 2] == '0')
                i = k + 1;
            else
                i = k + 1;
            cnt += (t >= 1);
        } else 
            i++;
    }
    cout << ans << endl;
    return 0;
}
/*
101010110100
*/