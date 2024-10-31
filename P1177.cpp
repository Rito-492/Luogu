#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int main () {
    int n, arr[N];
    cin.sync_with_stdio();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++)
        cout << arr[i] << ' ';
    return 0;
}