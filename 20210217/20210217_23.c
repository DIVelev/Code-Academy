#include <stdio.h>
#include <stdlib.h>
#define len 10

/*Задача 23.
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/

int* fillArray(int *arr,int size);
int* bubbleSort(int *arr,int size);
void printArray(int *arr,int size);
char* bubbleSortAWriteToB(const char a[], char b[]);

int main(void){

    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];
    int *p = array;
    p = fillArray(p,size);
    printf("\nArray before bubble sorting: \n");
    printArray(p,size);
    p = bubbleSort(p,size);
    printf("\nArray after bubble sorting: \n");
    printArray(p,size);


    char sortLetters[len];
    char lettersToBeSorted[len] = {'a','r','p','b','r','c','x','e','w','j'};
    char *ptr = lettersToBeSorted;
    ptr = bubbleSortAWriteToB(lettersToBeSorted,sortLetters);
    int i;
    printf("\nBubble sorting a char array: \n");
    for(i=0;i<len;i++){
        printf("%c\t",ptr[i]);
    }

    return 0;
}

int* fillArray(int *arr,int size){

    int i;
    for(i=0;i<size;i++){
        printf("Enter an element for the array: \n");
        scanf("%d",&arr[i]);
    }

    return arr;
}

int* bubbleSort(int *arr,int size){

    int i,j,swap;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j] > arr[j+1]){
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    return arr;
}

void printArray(int *arr,int size){

    int i;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

char* bubbleSortAWriteToB(const char a[], char b[]){
    char temp;
    int i,j;

    for (i = 0; i < len; i++){
        b[i] = a[i];
    }

    for(i = 0; i < len; i++){
        for(j = i + 1; j < len - 1; j++){
            if(b[j-1] > b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }   
    }

    return b;
}