#include <bits/stdc++.h>
using namespace std;
struct stu {
    string name;
    int year, month, day, num;
};
bool cmp(stu x, stu y) {
    if (x.year == y.year) {
        if (x.month == y.month) {
            if (x.day == y.day)
                return x.num > y.num;
            else
                return x.day < y.day;
        }
        else
            return x.month < y.month;
    }
    else
        return x.year < y.year;
}
int main () {
    int n;
    stu arr[110];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].name >> arr[i].year >> arr[i].month >> arr[i].day;
        arr[i].num = i;
    }
    sort(arr + 1, arr + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        cout << arr[i].name << endl;
    return 0;
}