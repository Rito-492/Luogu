#include <bits/stdc++.h>
using namespace std;
const int N  = 1e5 + 1;
int n, r, q;
struct player {
    int i, s, w;
    bool operator < (const player & a) const {
        if (s == a.s)
            return i < a.i;
        return s > a.s;
    }
}arr[N * 2], win[N], lose[N];
int main () {
    cin.sync_with_stdio(0);

    cin >> n >> r >> q;
    n *= 2;
    for (int i = 1; i <= n; i++) {
        arr[i].i = i;
        cin >> arr[i].s;
    }
    for (int i = 1; i <= n; i++)
        cin >> arr[i].w;
    
    sort(arr + 1, arr + n + 1);
    
    for (int i = 1; i <= r; i++) {
        int cnt1 = 0, cnt2 = 0;
        for (int j = 1; j <= n; j += 2) {
            if (arr[j].w > arr[j + 1].w) {
                arr[j].s ++;
                win[++cnt1] = arr[j];
                lose[++cnt2] = arr[j + 1];
            } else {
                arr[j + 1].s ++;
                win[++cnt1] = arr[j + 1];
                lose[++cnt2] = arr[j];
            }
        }
        int p1 = 1, p2 = 1;
        for (int i = 1; i <= n; i++) {
            if (p1 > cnt1)
                arr[i] = lose[p2++];
            else if (p2 > cnt2)
                arr[i] = win[p1++];
            else if (win[p1].s > lose[p2].s)
                arr[i] = win[p1++];
            else if (win[p1].s < lose[p2].s)
                arr[i] = lose[p2++];
            else if (win[p1].i < lose[p2].i)
                arr[i] = win[p1++];
            else
                arr[i] = lose[p2++];
        }
    }
    cout << arr[q].i << endl;
    return 0;
}