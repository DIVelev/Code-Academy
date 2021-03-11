#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

typedef struct checkBrackets{
    char bracket;
    int bracketCount;
    int lineCount;
    bool flag;
}brackets;

int main(void){

    FILE *fp;

    char *fileName = "zadacha2.txt";

    fp = fopen(fileName,"r");
    if (fp == NULL){
        printf("File failed to open");
        exit(1);
    }

    


    fclose(fp);
    fp = NULL;
    return 0;
}