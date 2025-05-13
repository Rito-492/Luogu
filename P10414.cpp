#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
int main () {
    cin.sync_with_stdio(0);
    int b = 1;
    for (int i = 1; i <= 100; i++) {
        b = (b << 1) % 100000;
        cout << b % 2023 << endl;
    }
    return 0;
}