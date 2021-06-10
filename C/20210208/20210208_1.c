#include <stdio.h>

/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

int main(void){

    int arr[5] = {0,1,2,3,4};
    int i = 0;

    for (i;i<5;i++){
        printf("Enter a number for index number %d: \n",i);
        scanf("%d",&arr[i]);
    }

    for (i = 0;i<5;i++){
        printf("Value of %d index is: %d \n",i,arr[i]);
    }

    return 0;
}