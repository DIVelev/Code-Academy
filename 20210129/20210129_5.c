#include <stdio.h>

/* Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */

void checkIfEven(int a);

int main(void){

    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    checkIfEven(a);


    return 0;
}

void checkIfEven(int a){

    if(a % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }

}