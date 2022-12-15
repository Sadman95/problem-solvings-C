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

    int sum = 0;
    while (n)
    {
        int num;
        fscanf(inputFile, "%d", &num);
        sum += num % 10;
        --n;
    }

    fprintf(outputFile, "Sum = %d", sum);

    return 0;
}