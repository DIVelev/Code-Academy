#include <stdio.h>
#include <stdlib.h>

#define GENERIC_MAX(type)\
    type type##_max(type a,type b)\
    {\
        return a > b ? a : b;\
    }
/*Задача 12.
Напишете макро GENERIC_MAX(type),което трябва да се експандне до следната функция: int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/

GENERIC_MAX(int);
GENERIC_MAX(float);
GENERIC_MAX(char);

int main(void){

    int a = 4;
    int b = 6;

    int (*p)(int,int);
    p = int_max;

    printf("Integer result: %d\n",p(a,b));

    float f = 5.7;
    float f1 = 6.3;

    float (*fp)(float, float);
    fp = float_max;

    printf("Float result: %.2f\n",fp(f,f1));

    char c = 'c';
    char A = 'A';

    char (*cp)(char,char);
    cp = char_max;

    printf("Char result: %c\n",cp(c,a));

    return 0;
}