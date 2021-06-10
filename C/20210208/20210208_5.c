#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

/*Задача 5*. Напишете програма, която генерира “случайна разходка” из
елементите на двумерен масив от тип char с размер 10 х 10. Преди разходката
всички елементи на масива съдържат символа ‘.’ и след като елемента е
посетен в него се записва поредната буква от латинската азбука т.е. на първия
посетен елемент се записва буквата ‘А’, а нз последния буквата ‘Z’. Програмата
трябва да се разхожда от елемент на елемент в следната последователност:
от елемента, на който е в момента може да се премести един елемент на горе,
на долу, на ляво или на дясно. Не може да се премества на произволна
позиция. Преди всяко преместване проверете дали няма да излезете извън
масива и дали позицията вече не е заета от някоя буква т.е. елемента да е
посетен вече. Ако горните условия са изпълнени се преместете в желатана
посока. Ако всичките 4 дестинации са блокирани вашата програм трябва да
спре.
Подсказка: Използвайте функциите srand() и rand() за да генерирате случайните числа. Използвайте int n = rand() % 4; за да генерирате числа от 1 до 4 */

void fillArr(char arr[N][N]);
void printArr(char arr[N][N]);
void move(int *x,int *y);
int checkMove(char arr[N][N],int row,int col,int x,int y);

int main(void){

    char arr[N][N];
    fillArr(arr);
    char letter = 'A';
    int row = 0,col = 0;
    arr[row][col] = letter;
    srand(time(NULL));
    int tryOtherWay = 0,maxWays = 4;

    for (letter = 'B';letter <= 'Z';){
        int x,y;
        move(&x,&y);
        if(checkMove(arr,row,col,x,y)){
            row = row + x;
            col = col + y;
            arr[row][col] = letter;
            letter++;
            tryOtherWay = 0;
        }
        else{
            tryOtherWay++;
            if (tryOtherWay == maxWays){
                printf("Blocked\n");
                break;
            }
        }
    }

    printArr(arr);

    return 0;
}

void fillArr(char arr[N][N]){

    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            arr[i][j] = '.';
        }
    }
}

void printArr(char arr[N][N]){
    
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}

void move(int *x,int *y){

    int move = rand() % 4;
    switch(move){
        case 0:
        *x = 1; // Надясно
        *y = 0;
        break;

        case 1:
        *x = -1; // Наляво
        *y = 0;
        break;

        case 2:
        *x = 0;
        *y = 1; // Надолу
        break;

        case 3:
        *x = 0;
        *y = -1; // Нагоре
        break;
    }
}

int checkMove(char arr[N][N],int row,int col,int x,int y){

    int i = row + x, j = col + y;
    if (i<0 || i>=N){
        return 0;
    }
    if (j<0 || j>=N){
        return 0;
    }
    if (arr[i][j] != '.'){
        return 0;
    }
    return 1;
}