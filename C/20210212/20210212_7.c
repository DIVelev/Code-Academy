#include <stdio.h>
#include <stdlib.h>

/*Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

int main(void){

    int size,*p,i;
    printf("Enter a size for the array: \n");
    scanf("%d",&size);
    p = (int*)calloc(size,sizeof(int));
    if (p == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }

    printf("Array after using calloc:\n");
    for(i=0;i<size;i++){
        printf("Number at index %d is: %d\n",i,*(p+i));
    }

    free(p);

    return 0;
}