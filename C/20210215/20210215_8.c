#include <stdio.h>
#include <stdlib.h>

/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/

int main(void){

    int a = 5;
    int *pi = &a;
    printf("Address is: %p",pi);

    return 0;
}