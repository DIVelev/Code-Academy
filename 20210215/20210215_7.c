#include <stdio.h>
#include <stdlib.h>

/*Задача 7.
Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.*/

int main(void){

    int a;
    printf("Enter a number for a: \n");
    scanf("%d",&a);
    int *p = &a;
    printf("Sum of a + 5 = %d",(*p + 5));

    return 0;
}