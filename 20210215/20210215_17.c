#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 100

/*Задача 17. Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_functi
on_memset.htm
*/

int main(void){

    char s1[] = "A string to be copied.";
    char s3[] = "I am very good in strings coping!";
    char s2[L],s4[L];
    memset(s2,0,L);
    printf("S2 after memset : %s\n",s2);
    strcpy(s4,s1);
    printf("Copied s1 to s4: %s\n",s4);
    memset(s4,0,L);
    printf("S4 after memset : %s\n",s4);
    strcpy(s2,s3);
    printf("Copied s3 to s2: %s\n",s2);

    return 0;
}