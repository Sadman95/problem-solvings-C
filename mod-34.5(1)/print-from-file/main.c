#include "stdio.h"
#include "stdbool.h"
int main()
{
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("File not found!");
        return;
    }
    outputFile = fopen("output.txt", "w");
    while (true)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }

    return 0;
}