#include <stdio.h>
#include <stdlib.h>

/*Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/

int main(void){

    int size,newsize,*p;
    printf("Enter a size for the array: \n");
    scanf("%d",&size);
    p = (int*)malloc(size * sizeof(int));
    if (p == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }
    printf("Addresses of allocated memory: %p\n", p);
    printf("Enter the new size:\n");
    scanf("%d",&newsize);
    p = (int*)realloc(p,newsize*sizeof(int));
    printf("Addresses of reallocated memory: %p\n", p);

    return 0;
}