#include <stdio.h>
int main()
{
    int n;
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "File not found\n");
        return;
    }
    fscanf(inputFile, "%d", &n);

    int i = 1;
    while (i <= n)
    {
        fprintf(outputFile, "%d ", i);
        i++;
    }

    return 0;
}