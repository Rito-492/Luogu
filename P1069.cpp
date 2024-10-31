#include <bits/stdc++.h>
using namespace std;
const long long N = 1e4 + 1;
const long long MAX = 0x3f3f3f3f3f3f3f3f;
long long n, m1, m2, ans = MAX, s, pf1[2][N], pf2[2][N], cnt1, cnt2;
int main () {
    scanf("%lld%lld%lld", &n, &m1, &m2);
    cnt1 = 0;
    long long tmp = m1, max1 = 0;
    for (long long i = 2; i <= m1 && tmp >= i; i++) {
        if(tmp % i == 0) {
            pf1[0][++cnt1] = i;
            pf1[1][cnt1] = 0;
            while (tmp % i == 0 && tmp) {
                tmp /= i;
                pf1[1][cnt1]++;
            }
            pf1[1][cnt1] *= m2;
            max1 = (pf1[1][cnt1] > pf1[1][max1]) ? cnt1 : max1;
        }
    }
    for (long long i = 1; i <= n; i++) {
        scanf("%lld", &s);
        tmp = s;
        cnt2 = 0;
        for (long long j = 2; j <= s && tmp >= j; j++) {
            if (tmp % j == 0) {
                pf2[0][++cnt2] = j;
                pf2[1][cnt2] = 0;
                while (tmp % j == 0 && tmp) {
                    tmp /= j;
                    pf2[1][cnt2]++;
                }
            }
        }
        int k = lower_bound(pf2[0] + 1, pf2[0] + cnt2 + 1, pf1[0][max1]) - pf2[0];
        if (pf1[0][max1] == pf2[0][k])
            ans = min(ans, (long long)ceil(1.0 * pf1[1][max1] / pf2[1][k]));
    }
    if (m1 == 1)
        ans = 0;
    cout << (ans == MAX ? -1 : ans);
    return 0;
}