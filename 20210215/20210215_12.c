#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Задача 12.
Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/

int main(void){

    int arr[10][10][10],i,j,k,ncounter = 0;
    float avg;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                arr[i][j][k] = rand() % 100; // Random number от 0 до 99
                avg += arr[i][j][k];
                ncounter++;
                printf("Random number at arr[%d][%d][%d] is: %d\n",i,j,k,arr[i][j][k]);
            }
        }
    }
    
    printf("Average sum of the array is: %lf",(avg/ncounter));

    return 0;
}