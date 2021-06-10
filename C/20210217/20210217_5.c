#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5

/*Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/

extern int i,j;
void fillArrayWithRandomNum(int *arr);
void printArray(int *arr);
void findValues(int *arr);

int main(void){

    int array[size][size];
    fillArrayWithRandomNum((int*)array);
    printArray((int*)array);
    findValues((int*)array);
    
    return 0;

}

int i = 0,j = 0;

void fillArrayWithRandomNum(int *arr){

    srand((unsigned)time(NULL));
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            *((arr + size*i) + j) = rand() % 11;
        }
    }

}

void printArray(int *arr){

    int sum = 0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Number at array[%d][%d] is: %d\n",i,j,*((arr + size*i) + j));
        }
    }

}

void findValues(int *arr){

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(*((arr + size*i) + j) >= 1 && *((arr + size*i) + j) <= 5){
                printf("Number between 1-5 found at arr[%d][%d] and is: %d\n",i,j,*((arr + size*i) + j));
            }
        }
    }
}