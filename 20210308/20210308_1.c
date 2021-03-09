#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 1 Напишете програма, която чете стринг от стандартния вход и
го извежда на стандартния изход с функцията gets(szBuf);*/

int main(void){

    char a[10] = {0};

    printf("Gets input: \n");
    gets(a); // Ред от конзолата се записва в стринг a
    printf("Gets output: \n");
    puts(a); // Принтираме стринг на конзолата
    printf("Fgets input: \n");
    fgets(a,10,stdin); 
    printf("Fgets output:\n");
    puts(a);

    return 0;
}