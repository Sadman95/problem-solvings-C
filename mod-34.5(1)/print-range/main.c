#include "stdio.h"
#include "stdbool.h"
int main()
{
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "File not found\n");
        return;
    }

    int t;
    fscanf(inputFile, "%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);

        if (a > 0)
        {
            for (int i = a; i >= -a; i--)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
        else
        {
            for (int i = a; i <= a * (-1); i++)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
    }

    return 0;
}