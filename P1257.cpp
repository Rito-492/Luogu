#include <bits/stdc++.h>
using namespace std;
struct node {
    int x, y;
};
int main() {
    int n;
    double d = 0x3f3f3f3f;
    node arr[10010];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i].x >> arr[i].y;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            d = min (d, (double)(arr[i].x - arr[j].x)*(arr[i].x - arr[j].x)+(arr[i].y - arr[j].y)*(arr[i].y - arr[j].y));
    printf("%.4lf", sqrt(d));
    return 0;
}