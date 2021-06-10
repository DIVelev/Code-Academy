#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Задача 17*.
Имаме 2 сортирани масиви А и В с различна размерност k и l и
произволни int числа.
Образувайте масив С, образуван от смесването на А и В, така че С да
съдържа елементите на А и В, но да е подреден и да не се налага да го
сортираме отново.*/

int* bubbleSort(int *arr,int size);
void printArray(int *arr,int size);
int* mergeArrays(int* arr1,int* arr2,int size1,int size2,int *result);

int main(void){

    srand((unsigned)time(NULL));
    int k,l,i;
    printf("Enter the  size of the first array: \n");
    scanf("%d",&k);
    printf("Enter the  size of the second array: \n");
    scanf("%d",&l);
    int A[k],B[l];
    int *arr1,*arr2;
    arr1 = A;
    arr2 = B;
    for(i=0;i<k;i++){
        arr1[i] = rand()%100;
    }
    printf("\nFirst array is: \n");
    printArray(arr1,k);
    for(i=0;i<l;i++){
        arr2[i] = rand()%100;
    }
    printf("\nSecond array is: \n");
    printArray(arr2,l);
    bubbleSort(arr1,k);
    bubbleSort(arr2,l);

    int resultSize = k+l;
    int result[resultSize];
    int *res = result;
    mergeArrays(arr1,arr2,k,l,res);
    printf("\nAfter merging arrays are: \n");
    printArray(res,resultSize);

    return 0;
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