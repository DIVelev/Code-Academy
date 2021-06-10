#include <stdio.h>
#include <stdlib.h>
#define size 5

/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/

typedef int arrayDef[size];
void printArray(arrayDef arr);

int main(void){

    arrayDef a;
    int i;
    for(i=0;i<size;i++){
        printf("Enter value for index %d: \n",i);
        scanf("%d",&a[i]);
    }
    printArray(a);

    return 0;
}

void printArray(arrayDef arr){
    int i;
    for(i=0;i<size;i++){
        printf("Array[%d] = %d\n",i,arr[i]);
    }
}