#include <stdio.h>
#include <stdlib.h>

/*Задача 16.
Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./ */

int* mergeArrays(int* arr1,int* arr2,int size1,int size2,int *result);
void printArray(int *arr,int size);

int main(void){

    int arr1[] = {1,3,4,6,9}; // Направих ги с 5, за да го тествам и да не пиша 80 цифри
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2,5,7,8,10};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int resultSize = size1+size2;
    int result[resultSize];
    int *p = result;
    p = mergeArrays(arr1,arr2,size1,size2,p);
    printArray(p,resultSize);

    return 0;
}

int* mergeArrays(int* arr1,int* arr2,int size1,int size2,int *result){

    int i = 0,j = 0,k = 0;
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            result[k++] = arr1[i++];
        }
        else{
            result[k++] = arr2[j++];
        }
    }

    while(i<size1){
        result[k++] = arr1[i++];
    }

    while(j<size2){
        result[k++] = arr2[j++];
    }

    return result;
}

void printArray(int *arr,int size){

    int i;
    printf("Result array is: \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

}