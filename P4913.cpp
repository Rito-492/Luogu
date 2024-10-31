#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
struct node {
    int l, r;
}tree[N]; //静态链表?
int ans = 0;
void dfs(int i, int dep) { //到达第i个节点是的深度
    if (tree[i].l == 0 && tree[i].r == 0) {
        ans = max(ans, dep);
        return ;
    }
    dfs(tree[i].l, dep + 1);
    dfs(tree[i].r, dep + 1);
}
int main () {
    int n, l, r;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &l, &r);
        tree[i].l = l, tree[i].r = r;
    }
    dfs(1, 1);
    printf("%d", ans);
    return 0;
}