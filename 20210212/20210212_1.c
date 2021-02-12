#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/

int main(void){

    int size,sum = 0,*p,i;
    printf("Enter a size for the array: \n");
    scanf("%d",&size);
    p = (int*)malloc(size * sizeof(int));
    if (p == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }

    for(i=0;i<size;i++){
        printf("Enter a number for index %d\n",i);
        scanf("%d",&*(p + i));
        sum += *(p+i);
    }

    printf("Your array is:\n");

    for(i=0;i<size;i++){
        printf("Number at index %d is: %d\n",i,*(p+i));
    }

    printf("Sum of the numbers in the array is: %d\n",sum);
    free(p);
    

    return 0;
}