#include <bits/stdc++.h>
using namespace std;
const int L = 1e6 + 1;
int *prefix_table(string str) { //求前缀表
    int len = str.length(), j = 0;
    static int pre[L];
    pre[0] = 0;
    for (int i = 1; i < len; i++) {
        while (j && str[i] != str[j])
            j = pre[j - 1];
        if (str[i] == str[j])
            j++;
        pre[i] = j;
    }
    return pre;
}
void kmp(string &s1, string &s2) {
    int len1 = s1.length(), len2 = s2.length();
    int *pre = prefix_table(s2);
    int j = 0;
    for (int i = 0; i < len1; i++) {
        while (j && s1[i] != s2[j])
            j = pre[j - 1];
        if (s1[i] == s2[j])
            j++;
        if (j == len2) {
            cout << i - len2 + 2 << endl;
            j = pre[j - 1];
        }
    }
    for (int i = 0; i < len2; i++)
        cout << pre[i] << ' ';
}
int main () {
    string s1, s2;
    cin >> s1 >> s2;
    kmp(s1, s2);
    return 0;
}