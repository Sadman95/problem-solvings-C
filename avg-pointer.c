#include <stdio.h>

void avg_two_num(int a, int b, float *c);
int main()
{
    int x, y;
    float avg;
    scanf("%d %d", &x, &y);

    avg_two_num(x, y, &avg);
    printf("%0.3f", avg);
    return 0;
}

void avg_two_num(int a, int b, float *c)
{
    *c = (a + b) / 2.0;
}