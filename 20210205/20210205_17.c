#include <stdio.h>

/*Задача 17. Напишете програма за умножение на два двумерни
масиви, елемент по елемент.*/

void arrFill(int row,int columns,int arr[row][columns]);
void arrMultiplication(int arr1rows,int arr1cols,int arr2rows,int arr2cols,int arr1[arr1rows][arr1cols],int arr2[arr2rows][arr2cols]);

int main(void){

    int n,m,k,l,i=0,j=0;
    printf("Enter a number of rows for the first array: \n");
    scanf("%d",&n);
    printf("Enter a number of columns for the first array:\n");
    scanf("%d",&m);

    int arr1[n][m];
    arrFill(n,m,arr1);

    printf("Enter a number of rows for the second array: \n");
    scanf("%d",&k);
    printf("Enter a number of columns for the second array:\n");
    scanf("%d",&l);
    int arr2[k][l];
    arrFill(k,l,arr2);
    arrMultiplication(n,m,k,l,arr1,arr2);

    return 0;
}

void arrFill(int row,int columns,int arr[row][columns]){
    
    int i,j;

    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Your array is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            printf("Value at arr[%d][%d]: %d\n", i, j,arr[i][j]);
        }
    }
    
}

void arrMultiplication(int arr1rows,int arr1cols,int arr2rows,int arr2cols,int arr1[arr1rows][arr1cols],int arr2[arr2rows][arr2cols]){

    int i,j;
    int arrResult[arr1rows+arr2rows][arr1cols+arr2cols];

    if(arr1rows>=arr2rows && arr1cols>=arr2cols){
        for(i=0;i<arr1rows;i++){
            for(j=0;j<arr1cols;j++){
                arrResult[i][j] = arr1[i][j] * arr2[i][j];
            }
        }
        
        printf("After array 1 and array 2 multiplication:\n");
        for(i=0;i<arr1rows;i++){
            for(j=0;j<arr1cols;j++){
                printf("Result at [%d][%d] is: %d\n",i,j,arrResult[i][j]);  
            }
        }
    }
    else{
        for(i=0;i<arr2rows;i++){
            for(j=0;j<arr2cols;j++){
                arrResult[i][j] = arr1[i][j] * arr2[i][j];
            }
        }
        
        printf("After array 1 and array 2 multiplication:\n");
        for(i=0;i<arr2rows;i++){
            for(j=0;j<arr2rows;j++){
                printf("Result at [%d][%d] is: %d\n",i,j,arrResult[i][j]);  
            }
        }
    }
}