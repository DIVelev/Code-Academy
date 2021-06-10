#include <stdio.h>
#include <stdlib.h>
#define size 100

/*Задача 3.
Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка.*/

int main(void){

    char *fileName = "test1.txt";
    FILE *fp = NULL;
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    char *contents = (char*)malloc(size*sizeof(char));
    char ch;
    int i;
    printf("Contents of the file:\n");
    while((ch=getc(fp))!= EOF){
        contents[i] = ch;
        printf("%c",contents[i]);
        i++;
    }

    fclose(fp);
    fp = NULL;
    return 0;
}