#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
int main () {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        int k;
        map<string, string> f;
        cin >> s >> t >> k;
        int i = 1;
        while (s[i - 1] == t[i - 1] && i <= s.size())
            i++;
        while (i <= s.size()) {
            if (i > t.size())
                f[s.substr(max(0, i - k), k)] = "";
            if (s[i - 1] == t[i - 1]) {
                f[s.substr(max(0, i - k), k)] = t[i - 1];
            } else {
                f[s.substr(max(0, i - k), k)] = t[i - 1];
            }
            i++;
        }
        if (f.size() == 0)
            f[s.substr(0, k)] = t[0];
        cout << f.size() << endl;
        for (auto it = f.begin(); it != f.end(); it++)
            cout << "(" << it->first << "," << it->second << ")" << endl;
    }
    return 0;
}