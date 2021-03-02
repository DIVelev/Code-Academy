#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/

typedef struct test_str{
    char c;
    int i;
}test;

void printStruct(test *test);

int main(void){

    test t1 = {'A',15};
    printStruct(&t1);

    return 0;
}

void printStruct(test *test){
    printf("Char: %c\n",test->c);
    printf("Integer: %d\n",test->i);
}