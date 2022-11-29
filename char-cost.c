#include <stdio.h>
#include <math.h>

int get_cost(char str[]);
int cost_of_two(int cst);
int main()
{
    char S[100];
    int cost;

    scanf("%s", S);

    cost = get_cost(S);

    if (cost_of_two(cost))
        printf("YES");
    else
        printf("NO");

    return 0;
}

int get_cost(char str[])
{
    int cost = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        cost += str[i] - 96;
    }
    return cost;
}

int cost_of_two(int cst)
{
    int flag = 0;
    for (int i = 0; i < (cst / 2); i++)
    {
        if (pow(2, i) == cst)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}