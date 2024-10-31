#include <bits/stdc++.h>
using namespace std;
const int S = 20 + 1;
int s1, s2, s3, s4, ans, t[S];
int main () {
    cin >> s1 >> s2 >> s3 >> s4;
    for (int i = 1; i <= s1; i++)
        cin >> t[i];
    sort(t + 1, t + s1 + 1);
    for (int i = s1; i > 0; i -= 2) {
        ans += t[i];
    }
    for (int i = 1; i <= s2; i++)
        cin >> t[i];
    sort(t + 1, t + s2 + 1);
    for (int i = s2; i > 0; i -= 2) {
        ans += t[i];
    }
    for (int i = 1; i <= s3; i++)
        cin >> t[i];
    sort(t + 1, t + s3 + 1);
    for (int i = s3; i > 0; i -= 2) {
        ans += t[i];
    }
    for (int i = 1; i <= s4; i++)
        cin >> t[i];
    sort(t + 1, t + s4 + 1);
    for (int i = s4; i > 0; i -= 2) {
        ans += t[i];
    }
    cout << ans;
    return 0;
}