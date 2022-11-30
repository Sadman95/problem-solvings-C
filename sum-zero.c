#include <stdio.h>

int sum_zero(int n, int *s);
int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum_zero(arr[i], &sum);
    }

    printf("%d", sum);

    return 0;
}

int sum_zero(int n, int *s)
{
    if (n % 10 == 0)
        *s += n;
}