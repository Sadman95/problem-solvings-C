#include <stdio.h>

void bubble_sort(int n, int *arr);
void swap_num(int *tmp, int *p, int *q);
int main()

{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble_sort(N, arr);

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubble_sort(int n, int *arr)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_num(&temp, &arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap_num(int *tmp, int *p, int *q)
{
    *tmp = *p;
    *p = *q;
    *q = *tmp;
}