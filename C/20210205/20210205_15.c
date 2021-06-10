#include <stdio.h>

/*Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове).*/

void arrFill(int row,int columns,int arr[row][columns]);
void rowAverage(int row,int columns,int arr[row][columns]);
void colAverage(int row,int columns,int arr[row][columns]);

int main(void){

    int n,m,i=0,j=0;
    printf("Enter a number of rows: \n");
    scanf("%d",&n);
    printf("Enter a number of columns:\n");
    scanf("%d",&m);

    int arr[n][m];
    arrFill(n,m,arr);
    rowAverage(n,m,arr);
    colAverage(n,m,arr);

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

void rowAverage(int row,int columns,int arr[row][columns]){

    int i,j,count;
    double rowAvg = 0;
    for(i=0;i<row;i++){
        rowAvg = 0;
        count = 0;
        for(j=0;j<columns;j++){
            rowAvg += arr[i][j];
            count++;
        }
        printf("Average for row number %d is: %lf\n",i,rowAvg/count);
    }
}

void colAverage(int row,int columns,int arr[row][columns]){
    
    int i,j,count;
    double colAvg = 0;
    for(j=0;j<columns;j++){
        colAvg = 0;
        count = 0;
        for(i=0;i<row;i++){
            colAvg += arr[i][j];
            count++;
        }
        printf("Average for column number %d is: %lf\n",j,colAvg/count);
    }
}