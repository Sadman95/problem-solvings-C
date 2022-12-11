#include <stdio.h>

void solve(int num)
{
    if (num < 1)
        return;
    printf("%d ", num);
    solve(num - 1);
}
int main()
{
    int n;
    scanf("%d", &n);

    solve(n);
    return 0;
}
