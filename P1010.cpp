#include <bits/stdc++.h>
using namespace std;
const int N = 20;
void f(int n) {
    int m = n, arr[N], cnt1 = 0, cnt2 = 0;
    while (m) {
        if (m & 1)
            arr[++cnt1] = cnt2;
        m >>= 1;
        cnt2++;
    }
    for (int i = cnt1; i > 0; i--) {
        if (arr[i] > 1) {
            cout << "2(";
            f(arr[i]);
            cout << ")";
        }
        if (arr[i] == 1)
            cout << "2";
        if (arr[i] == 0)
            cout << "2(0)";
        if (i > 1)
            cout << "+";
    }
}
int main () {
    int n;
    cin >> n;
    f(n);
    return 0;
}