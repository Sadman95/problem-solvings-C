// https://codeforces.com/contest/1608/problem/A

#include <stdio.h>

void solve();
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        printf("\n");
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d", n);
        return;
    }

    for (int i = n; i < 2 * n; i++)
    {
        printf("%d ", i);
    }
}