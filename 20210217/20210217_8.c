#include <stdio.h>
#include <stdlib.h>

/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */

int main(void){

    int elements,number1 = 0,number2 = 1,i,nextNumber;
    printf("Enter the number of elements: \n");
    scanf("%d",&elements);
    int arr[elements];
    arr[0] = number1;
    arr[1] = number2;

    for(i=2;i<elements;i++){
        nextNumber = number1 + number2;
        arr[i] = nextNumber;
        number1 = number2;
        number2 = nextNumber;
    }

    for(i=0;i<elements;i++){
        printf("%d element : %d\n",i,arr[i]);
    }

    return 0;
}