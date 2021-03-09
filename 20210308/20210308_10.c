#include <stdio.h>
#include <stdlib.h>

/*Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/

int main(void){

    FILE *fp;
    char *fileName = "test1.txt";
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    //fseek(fp,0,SEEK_END);
    long fpos = ftell(fp);
    //printf("Size of file is: %ld bytes",fpos);
    printf("Position : %ld",fpos);

    fclose(fp);
    fp = NULL;
    return 0;
}