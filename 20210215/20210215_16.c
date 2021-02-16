#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 100

/*Задача 16.
Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm*/

int main(void){

    char s1[] = "A string to be copied.";
    char s3[] = "I am very good in strings coping!";
    char s2[L],s4[L];
    strcpy(s4,s1);
    printf("Copied s1 to s4: %s\n",s4);
    strcpy(s2,s3);
    printf("Copied s3 to s2: %s\n",s2);

    return 0;
}