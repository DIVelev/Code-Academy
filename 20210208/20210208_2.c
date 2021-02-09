#include <stdio.h>

/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

int main(void){

    int arr[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter a value for array[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Value of array[%d][%d]: %d\n",i,j,arr[i][j]);
        }
    }

    return 0;
}