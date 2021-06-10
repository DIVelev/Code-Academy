#include <stdio.h>
#include <stdlib.h>
#define row 15
#define col 15
/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/

struct point{
    int x;
    int y;
};

struct rectangle{
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
    printf("Array before rectangle: \n");
    printArray(arr);

    struct rectangle rect;

    rect.a.x = 3;
    rect.a.y = 4;
    rect.b.x = 7;
    rect.b.y = 10;

    for(i=rect.a.x;i<=rect.b.x;i++){
        for(j=rect.a.y;j<=rect.b.y;j++){
            arr[i][j] = '@';
        }
    }
    printf("Array after filling the rectangle\n");
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