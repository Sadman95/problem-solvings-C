#include <stdio.h>

int solve(int num)
{
    if (num == 0)
        return 0;
    return num + solve(num - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int res = solve(n);
    printf("%d", res);
    return 0;
}