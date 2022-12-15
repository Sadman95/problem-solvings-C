#include <stdio.h>

void print_arr(int n, int *arr);
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_arr(N, &arr);

    return 0;
}

void print_arr(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}