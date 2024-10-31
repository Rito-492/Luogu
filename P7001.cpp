#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    vector<string> arr;
    int n;
    cin >> s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        bool flag = true;
        for (int j = 0; j < s.length(); j++)
            if (s[j] != '*' && s[j] != str[j])
                flag = false;
        if (flag)
            arr.push_back(str);
    }
    cout << arr.size() << endl;
    for (vector<string>::iterator it = arr.begin(); it != arr.end(); it++)
        cout << *it << endl;
    return 0;
}