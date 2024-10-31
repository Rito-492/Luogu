#include <bits/stdc++.h>
using namespace std;
struct city {
    int num, dis;
    string name;
};
int main() {
    int t = 1, ans = 0x3f3f3f3f, anscity;
    city arr[160];
    while (1) {
        cin >> arr[t].num >> arr[t].dis >> arr[t].name;
        if (arr[t].name == "Moscow")
            break;
        else
            t++;
    }
    for (int i = 1; i <= t; i++) {
        int expense = 0;
        for (int j = 1; j <= t; j++) {
            expense += arr[j].num * abs(arr[i].dis - arr[j].dis);
        }
        if (ans > expense)
            ans = expense, anscity = i;
        if (ans == expense && arr[i].dis < arr[anscity].dis)
            ans = expense, anscity = i;
    }
    cout << arr[anscity].name << ' ' << ans;
    return 0;
}