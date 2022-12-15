#include "stdio.h"
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

    int n;
    fscanf(inputFile, "%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            fprintf(outputFile, " ");
        }

        for (int j = 1; j <= n; j++)
        {
            fprintf(outputFile, "#");
        }
        fprintf(outputFile, "\n");
    }

    return 0;
}