#include <stdio.h>
#include <stdlib.h>
#define row 15
#define col 15
/*Задача 6. Направете по подобен начин триъгълник:*/

struct point{
    int x;
    int y;
};

struct triangle{
    struct point a;
    struct point b;
};

void printArray(char arr[row][col]);

int main(void){

    int i,j;
    char arr[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            arr[i][j] = '-';
        }
    }
    printf("Array before triangle: \n");
    printArray(arr);

    struct triangle point;
    point.a.x = 3;
    point.a.y = 4;
    point.b.x = 9;
    point.b.y = 10;

    for(i=point.a.x;i<=point.b.x;i++){
        for(j=point.a.y;j<=i;j++){
            arr[i][j] = '@';
        }
    }
    printf("Array after filling the triangle\n");
    printArray(arr);

    return 0;
}

void printArray(char arr[row][col]){

    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}