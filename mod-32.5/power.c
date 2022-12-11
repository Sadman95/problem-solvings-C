#include <stdio.h>

int solve(int base, int n)
{
    if (n == 0)
        return 1;
    return base * solve(base, n - 1);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", solve(n, m));
    return 0;
}