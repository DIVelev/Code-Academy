#include <stdio.h>
#include <stdlib.h>

/*Задача 7.
Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека.*/

int main(void){

    FILE *fp;
    char *fileName = "zadacha7_test.txt";
    fp = fopen(fileName,"w");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    int ch;
    for(ch=43;ch<=100;ch++){
        fputc(ch,fp);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}