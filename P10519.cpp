#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
int main () {
    int x, y;
    double t, v, d;
    scanf("%d%d%lf%lf", &x, &y, &t, &v);
    d = sqrt(x * x + y * y) * sin(PI * t * v) * 2;
    printf("%.10lf", fabs(d));
    return 0;
}