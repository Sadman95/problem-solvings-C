#include <stdio.h>

int sort_asc(int n, int arr[]);
int get_largest(int n, int k, int arr[]);
int get_smallest(int n, int k, int arr[]);
int main()
{
    int N, k, largest = 0, smallest = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    sort_asc(N, arr);

    largest = get_largest(N, k, arr);
    smallest = get_smallest(N, k, arr);

    printf("%dth largest element = %d\n", k, largest);
    printf("%dth smallest element = %d", k, smallest);

    return 0;
}

int sort_asc(int n, int arr[])
{
    int i, j, temp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int get_largest(int n, int k, int arr[])
{
    int l, cnt = 0;
    for (int i = n; i >= 1; i--)
    {
        cnt++;
        if (cnt == k)
            l = arr[n - k + 1];
    }
    return l;
}

int get_smallest(int n, int k, int arr[])
{
    int s;
    for (int i = 1; i <= n; i++)
    {
        if (i == k)
        {
            s = arr[i];
            break;
        }
    }
    return s;
}