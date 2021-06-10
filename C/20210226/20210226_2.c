#include <stdio.h>
#include <stdlib.h>

/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/

typedef long long int lli;

void printLLI(lli a);

int main(void){

    lli a = 4757998;
    printLLI(a);

    return 0;
}

void printLLI(lli a){

    printf("Testing the lli type: %lld\n",a);
    printf("Size of lli type: %d\n",sizeof(lli));
}