#include <stdio.h>
#include <stdlib.h>

/*Задача 11.
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/

int main(void){

    FILE *fp;
    char *fileName = "test2.txt";
    fpos_t position;

    fp = fopen(fileName,"w");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }
    if(fgetpos(fp,&position) != 0){
        printf("Error\n");
        return -1;
    }
    printf("Position before string: %d\n",position);

    fputs("Hello",fp);
    if(fgetpos(fp,&position) != 0){
        printf("Error\n");
        return -1;
    }
    printf("Position after string: %d\n",position);

    fclose(fp);
    fp = NULL;
    return 0;
}