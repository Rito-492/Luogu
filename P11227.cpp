#include <bits/stdc++.h>
using namespace std;
bool vis[5][14];
int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        int x, y;
        switch (s[0]) {
            case 'D':x = 1;break;
            case 'C':x = 2;break;
            case 'H':x = 3;break;
            case 'S':x = 4;break;
        }
        switch (s[1]) {
            case 'A':   y = 1;break;
            case 'T':   y = 10;break;
            case 'J':   y = 11;break;
            case 'Q':   y = 12;break;
            case 'K':   y = 13;break;
            default:    y = s[1] - '0';break;
        }
        vis[x][y] = true;
    }
    int ans = 0;
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 13; j++)
            ans += (!vis[i][j]);
    cout << ans;
    return 0;
}