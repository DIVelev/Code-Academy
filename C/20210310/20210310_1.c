#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

/*Задача 1.
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/

int main(void){

    FILE *fp;
    FILE *fp1;

    char *fileName = "zadacha1.txt";
    char *fileName1 = "zadacha1_test.txt";

    fp = fopen(fileName,"r");
    if (fp == NULL){
        printf("File failed to open");
        exit(1);
    }

    fp1 = fopen(fileName1,"r");
    if (fp1 == NULL){
        printf("File failed to open");
        exit(2);
    }

    char* string = (char*)malloc(size*sizeof(char));
    char* string1 = (char*)malloc(size*sizeof(char));
    int  lineCounter = 0;

    while(fgets(string,size,fp)){
        lineCounter++;
        fgets(string1,size,fp1);
        if(strcmp(string,string1) != 0){
            printf("Line %d from both files is different\n",lineCounter);
            printf("%s",string);
            printf("%s",string1);
            break;
        }
    }


    fclose(fp);
    fp = NULL;
    fclose(fp1);
    fp1 = NULL;
    return 0;
}