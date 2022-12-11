#include <stdio.h>

void solve(int num)
{
    if (num < 1)
        return;
    solve(num - 1);
    printf("%d ", num);
}
int main()
{
    int n;
    scanf("%d", &n);

    solve(n);
    return 0;
}
