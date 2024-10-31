#include <bits/stdc++.h>
using namespace std;
const int X = 5;
const int Y = 6;
const char keyboard[5][6] = {
    {'A', 'B', 'C', 'D', 'E', 'F'},
    {'G', 'H', 'I', 'J', 'K', 'L'},
    {'M', 'N', 'O', 'P', 'Q', 'R'},
    {'S', 'T', 'U', 'V', 'W', 'X'},
    {'Y', 'Z', ' ', '-', '.', '\n'}
};
int main () {
    int x = 0, y = 0, ans = 0;
    char str[50];
    cin.getline(str, 50);
    for (int i = 0; i < strlen(str); i++)
        for (int j = 0; j < X; j++)
            for (int k = 0; k < Y; k++)
                if (keyboard[j][k] == str[i]) {
                    ans += abs(x - j) + abs(y - k);
                    x = j, y = k;
                }
    ans += abs(x - X + 1) + abs(y - Y + 1);
    cout << ans;
    return 0;
}