#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a[0] == 'y' && b[0] == 'y' && c == "ding" && d == "zhen")
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}