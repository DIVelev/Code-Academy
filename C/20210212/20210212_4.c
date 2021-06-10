#include <stdio.h>
#include <stdlib.h>

/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

int main(void){

    int size,*p,i;
    printf("Enter a size for the array: \n");
    scanf("%d",&size);
    p = (int*)malloc(size * sizeof(int)); // Заделяне
    
    if (p == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }

    for(i=0;i<size;i++){
        printf("Enter a number for index %d\n",i);
        scanf("%d",&*(p + i));
    }

    printf("Your array is:\n");

    for(i=0;i<size;i++){
        printf("Number at index %d is: %d\n",i,*(p+i));
    }

    free(p); // Освобождаване
    
    return 0;
}