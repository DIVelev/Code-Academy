#include <stdio.h>
#include <stdlib.h>
#define size 100
/*Задача 9.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.*/

int main(void){

    FILE *fp;
    char *fileName = "zadacha9_test.txt";
    fp = fopen(fileName,"w");
    if (fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    char *string = (char*)malloc(sizeof(string));
    printf("Enter a string: \n");
    gets(string);
    printf("Testing fprintf function\n");
    fprintf(fp,"String: %s\n",string);
    printf("Successfully written to file! \n");

    fclose(fp);
    fp = NULL;
    return 0;
}