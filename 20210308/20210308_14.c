#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви*/

int main(void){

    FILE *fin;
    char *fileNameIn = "originalText.txt";
    fin = fopen(fileNameIn,"r");
    if (fin == NULL){
        printf("File failed to open\n");
        return -1;
    }

    FILE *fout;
    char *fileNameOut = "copyText.txt";
    fout = fopen(fileNameOut,"w");
    if (fout == NULL){
        printf("Copy file failed to open\n");
        return -1;
    }

    char ch;
    ch = fgetc(fin);
    while(ch != EOF){

        if(islower(ch)){
            ch = ch - 32;
        }
        putc(ch,fout);
        ch = fgetc(fin);
    }

    fclose(fin);
    fin = NULL;
    fclose(fout);
    fout = NULL;

    remove(fileNameIn);
    if(rename(fileNameOut,fileNameIn) == 0){
        printf("File successfully renamed!\n");
    }
    else{
        printf("Failed to rename the file!\n");
    }

    fout = fopen(fileNameOut,"r");
    if (fout == NULL){
        printf("Copy file failed to open\n");
        return -1;
    }

    printf("Contents of the file: \n");
    ch = fgetc(fout);
    while (ch != EOF){
        printf("%c",ch);
        ch = fgetc(fout);
    }

    fclose(fout);
    fout = NULL;
    return 0;
}