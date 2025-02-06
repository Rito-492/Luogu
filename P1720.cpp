#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
int main () {
    int n;
    cin >> n;
    double ans, p1 = (1 + sqrt(5)) / 2, p2 = (1 - sqrt(5)) / 2;
    ans = (pow(p1, n) - pow(p2, n)) / sqrt(5);
    printf("%.2lf", ans);
    return 0;
}