#include <stdio.h>

float circle_area(int r);
int main()
{
    int R;
    scanf("%d", &R);
    printf("%f", circle_area(R));
    return 0;
}

float circle_area(int r)
{
    float PI = 3.14160004;
    float area;

    area = PI * r * r;
    return area;
}