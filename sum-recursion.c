#include <stdio.h>

int get_sum(int num);
int main()
{
    int n;
    scanf("%d", &n);
    int sum = get_sum(n);
    printf("%d", sum);
    return 0;
}

int get_sum(int num)
{
    if (num <= 1)
        return 1;
    return num + get_sum(num - 1);
}