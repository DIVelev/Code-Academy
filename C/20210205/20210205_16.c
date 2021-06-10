#include <stdio.h>

/*Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/

void arrFill(int length,int arr[length]);
void arrMultiplication(int arr1length,int arr2length,int arr1[arr1length],int arr2[arr2length]);

int main(void){

    int n,m;
    printf("Enter the length for the first array: \n");
    scanf("%d",&n);
    int arr1[n];
    arrFill(n,arr1);
    printf("Enter the length for the second array: \n");
    scanf("%d",&m);
    int arr2[m];
    arrFill(m,arr2);
    int arrResult[n+m];
    arrMultiplication(n,m,arr1,arr2);
    

    return 0;
}

void arrFill(int length,int arr[length]){
    
    int i,j;

    for(i=0;i<length;i++){
        printf("Enter value for arr[%d]:", i);
        scanf("%d",&arr[i]);
    }

    printf("Your array is: \n");
    for(i=0;i<length;i++){
        printf("Value of arr[%d] is: %d\n", i,arr[i]);
    }
    
}

void arrMultiplication(int arr1length,int arr2length,int arr1[arr1length],int arr2[arr2length]){

    int arrResult[arr1length+arr2length],i;

    if(arr1length>=arr2length){
        for(i=0;i<arr1length;i++){
            arrResult[i] = arr1[i] * arr2[i];
        }
        printf("After array 1 and array 2 multiplication:\n");
        for(i=0;i<arr1length;i++){
            printf("Result at index number %d is: %d\n",i,arrResult[i]);
        }
    }
    else{
        for(i=0;i<arr2length;i++){
            arrResult[i] = arr1[i] * arr2[i];
        }

        printf("After array 1 and array 2 multiplication:\n");
        for(i=0;i<arr2length;i++){
            printf("Result at index number %d is: %d\n",i,arrResult[i]);
        }
    }

}