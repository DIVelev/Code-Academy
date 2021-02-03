#include <stdio.h>

/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */

void my_swap(int* a,int* b);

int main(void){

    int a,b;
    printf("Enter a value for a: \n");
    scanf("%d",&a);
    printf("Enter a value for b: \n");
    scanf("%d",&b);
    printf("Values before swap: a = %d, b = %d \n",a,b);
    my_swap(&a,&b);

    return 0;
}

void my_swap(int* a,int* b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    printf("Swapped values: a = %d, b = %d\n",*a,*b);

}