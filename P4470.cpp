#include <bits/stdc++.h>
using namespace std;
const int N = 5e1 + 1;
int main () {
    int n;
    string des[N], str;
    bool isVaild[128];
    memset(isVaild, false, sizeof(isVaild));
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> des[i];
    }
    cin >> str;
    for (int i = 1; i <= n; i++) {
        bool flag = true;
        for (int j = 0; j < des[i].length() && j < str.length(); j++)
            if (des[i][j] != str[j]) {
                flag = false;
                break;
            }
        if (flag) {
            isVaild[des[i][str.length()]] = true;
        }
    }
    cout << "***";
    for (int i = 'A'; i <= 'Z'; i++) {
        if (isVaild[i])
            cout << (char)i;
        else
            cout << "*";
        if (i == 'E' || i == 'M' || i == 'U')
            cout << endl;
    }
    cout << "***";
    return 0;
}