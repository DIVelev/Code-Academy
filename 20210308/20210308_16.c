#include <stdio.h>
#include <stdlib.h>

/*Задача 16.
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/

int main(void){

    FILE *fin;
    char *fileName = "zadacha16.txt";
    fin = fopen(fileName,"r");
    if(fin == NULL){
        printf("File failed to open\n");
        return -1;
    }

    FILE *fout;
    char *fileNameOut = "zadacha16_test.txt";
    fout = fopen(fileNameOut,"w");
    if(fout == NULL){
        printf("File failed to open\n");
        return -1;
    }

    int lineCount = 0,deleteLine;
    char ch;

    while(!feof(fin)){
        ch = fgetc(fin);
        if(ch == '\n'){
            lineCount++;
        }
    }

    printf("Number of lines in file %s is: %d\n",fileName,lineCount);

    printf("Which line would you like to delete: \n");
    scanf("%d",&deleteLine);

    rewind(fin);
    lineCount = 1;
    ch = getc(fin);
    while(ch != EOF){
      if(deleteLine != lineCount)
        putc(ch, fout);
        ch = getc(fin);
        if(ch =='\n'){
            lineCount++;
        }
    }

    fclose(fin);
    fin = NULL;
    fclose(fout);
    fout = NULL;
    return 0;
}