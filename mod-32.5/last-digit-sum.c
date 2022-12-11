#include <stdio.h>

int solve(int ar[], int size)
{
    if (size == 0)
        return 0;
    return ar[0] % 10 + solve(ar + 1, size - 1);
}
int main()
{
    int n, res;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    res = solve(ar, n);
    printf("%d", res);
    return 0;
}