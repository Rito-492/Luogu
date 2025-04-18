#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 1;

struct Cow {
    int g, d;
    bool operator < (const Cow& a) {
        return g > a.g;
    }
}arr[N];

int n;
bool vis[N];

int main () {
    cin.sync_with_stdio(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i].g >> arr[i].d;

    sort(arr + 1, arr + n + 1);

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int j = arr[i].d;
        while (j > 0 && vis[j])
            j--;
        if (j) {
            ans += arr[i].g;
            vis[j] = arr[i].g;
        } 
    }
    cout << ans << endl;
    return 0;
}