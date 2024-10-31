#include <bits/stdc++.h>
using namespace std;
const int S = 1e3 + 1;
int factor_sum(int x) {
    int sum = 0;
    for (int i = 1; i < x; i++)
        if (x % i == 0)
            sum += i;
    return sum;
}
int s, dp[S];
int main () {
    cin >> s;
    for (int i = 1; i <= s; i++)
        for (int j = s; j >= i; j--)
            dp[j] = max(dp[j], dp[j - i] + factor_sum(i));
    cout << dp[s];
    return 0;
}