
#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 1;
int n, prebits, cnt[10], arr[10][10], num[11], tot;
int main () {
    cin >> n;
    int tmp = n;
    while (tmp) {
        num[++tot] = tmp % 10;
        tmp /= 10;
    }
    fill(cnt, cnt + 10, 1);
    for (int i = 2; i <= 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i - 1][j] = cnt[j];
            cnt[j] = 10 * cnt[j] + (int)(pow(10, i - 1));
        }
    }
    memset(cnt, 0, sizeof(cnt));
    for (int i = tot; i > 0; i--) {
        for (int j = 0; j < num[i]; j++) {
            for (int k = 0; k < 10; k++)
                cnt[k] += arr[i - 1][k];
        }
        if (i == tot) {
            for (int k = 0; k < 10; k++)
                cnt[k] -= arr[i - 1][k];
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[4][i] << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int n, cnt[10];
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp) {
            cnt[tmp % 10]++;
            tmp /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
        cout << cnt[i] << endl;
    return 0;
}*/