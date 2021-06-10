#include <stdlib.h>
#include <stdio.h>

/*Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/

int main(void){

    int i = 10;
    float f = 1.4;
    char c = 'a'; 
    int* pi = &i;
    float* pf = &f;
    char* pc = &c;

    printf("Address of pointer to integer: %p\n",pi);
    printf("Address of pointer to float: %p\n",pf);
    printf("Address of pointer to char: %p\n",pc);

    return 0;
}