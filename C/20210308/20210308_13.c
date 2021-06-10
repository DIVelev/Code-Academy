#include <stdio.h>
#include <stdlib.h>

/*Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/

int main(void){

    FILE *fp;
    char *fileName = "zadacha13_test.txt";
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    int lineCount = 0;
    char ch;

    while((ch = getc(fp))!= EOF){
        if (ch == '\n'){
            lineCount++;
        }
    }

    printf("Number of lines in file %s is: %d\n",fileName,lineCount);

    fclose(fp);
    fp = NULL;
    return 0;
}