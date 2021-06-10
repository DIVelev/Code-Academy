#include <stdio.h>
#include <stdlib.h>

/*Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът. 
Продължение: Затворете файла.
Продължение: Преименувайте файла.
Продължение: Изтрийте файла.*/

int main(void){

    FILE *fp = NULL;
    char *fileName = "20210308.txt";
    fp = fopen(fileName,"wt");
    if(fp == NULL){
        printf("File failed to open!\n");
    }

    fclose(fp);
    fp = NULL;

    char *fileNewName = "20210308_copy.txt";

    if(rename(fileName,fileNewName) == 0){
        printf("File successfully renamed!\n");
    }
    else{
        printf("Failed to rename the file!\n");
    }

    if(remove(fileName) != 0){
        printf("Successfully deleted the file!\n");
    }
    else{
        printf("Failed to delete the file! \n");
    }

    return 0;
}