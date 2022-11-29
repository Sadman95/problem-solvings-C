#include <stdio.h>

void print_num(int n);
int main()
{
    int num;
    scanf("%d", &num);

    while (num)
    {
        print_num(num);
        num--;
    }

    return 0;
}

void print_num(int n)
{
    printf("%d ", n);
}