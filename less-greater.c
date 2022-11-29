#include <stdio.h>

int get_count(int size, int t, int arr[]);
int main()
{
    int n, k, cnt;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    cnt = get_count(n, k, arr);

    printf("%d", cnt);

    return 0;
}

int get_count(int size, int t, int arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < t || arr[i] > t)
            count++;
    }
    return count;
}