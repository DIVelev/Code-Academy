#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile;
    FILE *destFile;
    char *sourcePath = "numbers.txt";
    char *destPath = "numbers_new.txt";

    char ch;
    sourceFile = fopen(sourcePath,"r");
    destFile = fopen(destPath,"w");

    if (sourceFile == NULL || destFile == NULL)
    {
        printf("\nUnable to open file.\n");
        return -1;
    }

    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        fputc(ch, destFile);
        ch = fgetc(sourceFile);
    }


    printf("\nFiles copied successfully.\n");

    fclose(sourceFile);
    sourceFile = NULL;
    fclose(destFile);
    destFile = NULL;

    return 0;
}