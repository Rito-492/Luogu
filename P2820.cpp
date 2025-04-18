#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 1e2 + 1;
const int K = 5e3;

struct Edge {
    int from, to, m;
    bool operator < (const Edge& a) {
        return m < a.m;
    }
}arr[K];
int n, k, f[N], ans, sum;

int FIND(int x) {
    return f[x] < 0 ? x : f[x]= FIND(f[x]);
}

void UNION(int x, int y) {
    int fx = FIND(x), fy = FIND(y);
    if (fx == fy)
        return ;
    if (f[fx] < f[fy]) {
        f[fx] += f[fy];
        f[fy] = fx;
    } else {
        f[fy] += f[fx];
        f[fx] = fy;
    }
}

int main () {
    cin.sync_with_stdio(0);
    memset(f, -1, sizeof f);

    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> arr[i].from >> arr[i].to >> arr[i].m;
        if (arr[i].m == 0)
            arr[i].m = INF;
        else
            sum += arr[i].m;
    }
    sort(arr + 1, arr + k + 1);
    for (int i = 1; i <= k; i++)
        if (FIND(arr[i].from) != FIND(arr[i].to)) {
            UNION(arr[i].from, arr[i].to);
            ans += arr[i].m;
        }
    cout << sum - ans << endl;
    return 0;
}