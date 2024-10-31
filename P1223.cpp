#include <bits/stdc++.h>
using namespace std;
struct node {
    int t;
    int num;
};
bool cmp(struct node x, struct node y) {
    return x.t < y.t;
}
int main() {
    int n;
    cin >> n;
    struct node *arr = new struct node[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].t;
        arr[i].num = i + 1;
    }
    sort(arr, arr + n , cmp);
    for (int i = 0; i < n; i++) 
        cout << arr[i].num << ' ';
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n - 1; i++) {
        sum1 += arr[i].t;
        sum2 += sum1;
    }
    printf("\n%.2f", sum2 / n);
    delete []arr;
    return 0;
}