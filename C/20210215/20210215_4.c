#include <stdio.h>
#include <stdlib.h>

/*Задача 4.
Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/

int main(void){

    int* pi;
    float* pf;
    char* pc;

    printf("Address of pointer to interger: %p\n",pi);
    printf("Address of pointer to float: %p\n",pf);
    printf("Address of pointer to char: %p\n",pc);

    //Визуализира се адресът на поинтърите, в зависимост от system bit - 32bit или 64bit.
    // Ако е 64bit => 16-чен вид 

    return 0;

}