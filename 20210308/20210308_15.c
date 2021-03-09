#include <stdio.h>
#include <stdlib.h>

/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/

int main(void){

    FILE *fp;
    char *fileName = "zadacha13_test.txt";
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    int i,count;
    fseek(fp,0,SEEK_END);
    count = ftell(fp);

    while(i<count){
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }

    fclose(fp);
    fp = NULL;
    return 0;
}