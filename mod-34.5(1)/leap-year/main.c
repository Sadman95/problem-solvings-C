#include "stdio.h"
#include "stdbool.h"
int main()
{
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "a");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "File not found\n");
        return;
    }

    int year;
    fscanf(inputFile, "%d", &year);

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        fprintf(outputFile, "%d-->YES", year);
    }
    else
        fprintf(outputFile, "%d-->NO", year);

    fprintf(outputFile, "\n");

    fclose(inputFile);
    fclose(outputFile);
}