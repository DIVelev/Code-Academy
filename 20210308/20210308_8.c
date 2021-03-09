#include <stdio.h>
#include <stdlib.h>
#define size 100

/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/

int main(void){

    FILE *fp;
    char *fileName = "stringToFile.txt";
    fp = fopen(fileName,"w");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    char *string = (char*)malloc(sizeof(char));
    printf("Enter a string:\n");
    gets(string);
    fputs(string,fp);

    printf("Successfully placed the string in file\n");

    fclose(fp);
    fp = NULL;
    return 0;
}