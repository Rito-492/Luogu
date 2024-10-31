#include <bits/stdc++.h>
using namespace std;
int ans, vis[6][6];
void dfs(int x, int y, int dep1, int dep2) {
    /*if (dep1 == 13 && dep2 == 12) {
        for (int i = 1; i < 6; i++) {
            bool flag1 = true, flag2 = true;
            for (int j = 1; j < 6; j++) {
                if (vis[i][j] != vis[i][1])
                    flag1 = false;
                if (vis[j][i] != vis[1][i])
                    flag2 = false;
                cout << vis[i][j] << ' ';
            }
            cout << endl;
            if (flag1 || flag2)
                return ;
        }
        ans++;
        return ;
    }*/
    if (y == 6) {
        dfs(x + 1, 1, dep1, dep2);
        return ;
    }
    if (x == 6) {
        for (int i = 1; i < 6; i++) {
            bool flag1 = true, flag2 = true;
            for (int j = 1; j < 6; j++) {
                if (vis[i][j] != vis[i][1])
                    flag1 = false;
                if (vis[j][i] != vis[1][i])
                    flag2 = false;
                cout << vis[i][j] << ' ';
            }
            cout << endl;
            if (flag1 || flag2)
                return ;
        }
        ans++;
        return ;
    }
    vis[x][y] = 1;
    dfs(x, y + 1, dep1 + 1, dep2);
    vis[x][y] = 2;
    dfs(x, y + 1, dep1, dep2 + 1);
}
int main () {
    vis[1][1] = 1;
    dfs(1, 1, 1, 0);
    vis[1][1] = 2;
    dfs(1, 1, 0, 1);
    cout << ans;
    return 0;
}