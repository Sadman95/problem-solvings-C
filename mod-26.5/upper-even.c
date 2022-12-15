#include <stdio.h>

void upper_even(char *s);
int main()
{
    char str[100];
    scanf("%s", str);

    upper_even(str);
    printf("%s", str);
    return 0;
}

void upper_even(char *s)
{
    for (int i = 0; s[i] != 0; i++)
    {
        if (*(s + i) % 2 == 0)
            *(s + i) -= 32;
    }
}