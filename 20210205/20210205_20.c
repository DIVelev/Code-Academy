#include <stdio.h>

/*Задача 20. Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак.*/

void arrFill(int row,int columns,int third,int arr[row][columns][third]);
void arrMultiplication(int arr1rows,int arr1cols,int arr1third,int arr2rows,int arr2cols,int arr2third,int arr1[arr1rows][arr1cols][arr1third],int arr2[arr2rows][arr2cols][arr2third]);
void check(int arr1rows,int arr1cols,int arr1third,int arr2rows,int arr2cols,int arr2third,int arr1[arr1rows][arr1cols][arr1third],int arr2[arr2rows][arr2cols][arr2third]);

int main(void){

    int n,m,t,k,l,d,i=0,j=0;
    printf("Enter a number of rows for the first array: \n");
    scanf("%d",&n);
    printf("Enter a number of columns for the first array:\n");
    scanf("%d",&m);
    printf("Enter a number of the third dimension for the first array: \n");
    scanf("%d",&t);


    int arr1[n][m][t];
    arrFill(n,m,t,arr1);

    printf("Enter a number of rows for the second array: \n");
    scanf("%d",&k);
    printf("Enter a number of columns for the second array:\n");
    scanf("%d",&l);
    printf("Enter a number of the third dimension for the first array: \n");
    scanf("%d",&d);
    int arr2[k][l][d];
    arrFill(k,l,d,arr2);
    arrMultiplication(n,m,t,k,l,d,arr1,arr2);
    check(n,m,t,k,l,d,arr1,arr2);

    return 0;
}

void arrFill(int row,int columns,int third,int arr[row][columns][third]){
    
    int i,j,k;

    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            for(k=0;k<third;k++){
            printf("Enter value for arr[%d][%d][%d]:", i, j,k);
            scanf("%d",&arr[i][j][k]);
            }
        }
    }

    printf("Your array is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            for(k=0;k<third;k++){
            printf("Enter value for arr[%d][%d][%d]: %d\n", i, j,k,arr[i][j][k]);
            }
        }
    }
    
}

void arrMultiplication(int arr1rows,int arr1cols,int arr1third,int arr2rows,int arr2cols,int arr2third,int arr1[arr1rows][arr1cols][arr1third],int arr2[arr2rows][arr2cols][arr2third]){

    int i,j,k;
    int arrResult[arr1rows+arr2rows][arr1cols+arr2cols][arr1third+arr2third];

    if(arr1rows>=arr2rows && arr1cols>=arr2cols && arr1third>arr2third){
        for(i=0;i<arr1rows;i++){
            for(j=0;j<arr1cols;j++){
                for(k=0;k<arr1third;k++){
                arrResult[i][j][k] = arr1[i][j][k] * arr2[i][j][k];  
                }
            }
        }
        
        printf("After array 1 and array 2 multiplication:\n");
        for(i=0;i<arr1rows;i++){
            for(j=0;j<arr1cols;j++){
                for(k=0;k<arr1third;k++){
                printf("Result at [%d][%d][%d] is: %d\n",i,j,k,arrResult[i][j][k]);  
                }
            }
        }
    }
    else{
        for(i=0;i<arr2rows;i++){
            for(j=0;j<arr2cols;j++){
                for(k=0;k<arr2third;k++){
                    arrResult[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
                }
            }
        }
        
        printf("After array 1 and array 2 multiplication:\n");
        for(i=0;i<arr2rows;i++){
            for(j=0;j<arr2rows;j++){
                for(k=0;k<arr1third;k++){
                printf("Result at [%d][%d][%d] is: %d\n",i,j,k,arrResult[i][j][k]);  
                }
            }
        }
    }
}

void check(int arr1rows,int arr1cols,int arr1third,int arr2rows,int arr2cols,int arr2third,int arr1[arr1rows][arr1cols][arr1third],int arr2[arr2rows][arr2cols][arr2third]){

    int flag = 0;
    int i,j,k;

    if(arr1rows>=arr2rows && arr1cols>=arr2cols && arr1third>arr2third){
        for(i=0;i<arr1rows;i++){
            for(j=0;j<arr1cols;j++){
                for(k=0;k<arr1third;k++){
                if(arr1[i][j][k] != arr2[i][j][k]){
                    flag = 1;
                    }  
                }
            }
        }
        
        if(flag == 1){
            printf("Arrays are not the same\n");
        }
        else{
            printf("Arrays are the same\n");
        }
    }
    else{
        for(i=0;i<arr2rows;i++){
            for(j=0;j<arr2cols;j++){
                for(k=0;k<arr2third;k++){
                if(arr1[i][j][k] != arr2[i][j][k]){
                    flag = 1;
                    }
            }
        }
        
        if(flag == 1){
            printf("Arrays are not the same\n");
        }
        else{
            printf("Arrays are the same\n");
        }
        }
    }
}