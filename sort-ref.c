#include <stdio.h>

void bubble_sort(int n, int *arr);
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
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}