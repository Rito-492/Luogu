#include <bits/stdc++.h>
using namespace std;
const int N = 30 + 1;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
int n, mp[N][N];
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (mp[i][j] == 0) {
                int qx[N * N], qy[N * N], l = 1, r = 0;
                qx[++r] = i, qy[r] = j;
                mp[i][j] = -1;
                bool flag = false;
                while (l <= r) {
                    if (qx[l] == 1 || qx[l] == n || qy[l] == 1 || qy[l] == n)
                        flag = true;
                    for (int k = 0; k < 4; k++) {
                        int x = qx[l] + dx[k];
                        int y = qy[l] + dy[k];
                        if (x > 0 && x <= n && y > 0 && y <= n && mp[x][y] == 0) {
                            qx[++r] = x, qy[r] = y;
                            mp[x][y] = -1;
                        }
                    }
                    l++;
                }
                if (!flag)
                    for (int k = 1; k <= r; k++)
                        mp[qx[k]][qy[k]] = 2;
            }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << (mp[i][j] == -1 ? 0 : mp[i][j]) << ' ';
        cout << endl;
    }
    return 0;
}