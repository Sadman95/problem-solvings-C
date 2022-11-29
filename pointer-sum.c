#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30, *x, *y, *z;
    x = &a;
    y = &b;
    z = &c;

    int sum = *x + *y + *z;
    printf("%d", sum);

    return 0;
}