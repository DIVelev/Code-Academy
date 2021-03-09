#include <stdio.h>
#include <stdlib.h>
#define size 100

/*Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;*/

int main(void){

    FILE *fp;
    char *fileName = "test1.txt";
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("Failed to open file \n");
        return -1;
    }

    char *string = (char*)malloc(size*sizeof(char));
    fscanf(fp,"%[^\n]s",string);

    printf("Contents of the file:\n");
    puts(string);

    fclose(fp);
    fp = NULL;
    return 0;
}