#include <stdio.h>
#include <stdlib.h>
#define size 50

/*Задача 4.
Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла;*/

int main(void){

    FILE *fp;
    char *fileName = "test1.txt";
    fp = fopen(fileName,"rt");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    char *str = (char*)malloc(sizeof(char));
    if(fgets(str,size,fp) == NULL){
        printf("Failed to read from file\n");
    }
    else{
        printf("Contents of the file: \n");
        puts(str);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}