#include <bits/stdc++.h>
using namespace std;

int main () {
    cin.sync_with_stdio(0);
    
    int m, n, k;
    cin >> m;
    while (m--) {
        cin >> n >> k;
        int cnt = 0;
        int tmp = (1 << n) - 1 + k;
        while (tmp) {
            cnt += tmp & 1;
            tmp >>= 1;
        }
        if (cnt & 1)
            cout << "RED" << endl;
        else
            cout << "BLACK" << endl;
    }
    return 0;
}