#include <stdio.h>
#include <stdlib.h>
#define row 8
#define col 8

void menu(char arr[row][col], int i, int j);

int main(void)
{

    char board[row][col] = {
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
    };

    int i, j;
    i = -1;
    while (i < 0 || i > 7){
        printf("Enter your starting row: \n");
        scanf("%d", &i);
    }
    j = -1;
    while (j < 0 || j > 7){
        printf("Enter your starting column: \n");
        scanf("%d", &j);
    }

    menu(board,i,j);

    return 0;
}

void menu(char arr[row][col], int i, int j){

    int choice, tempRow, tempCol;
    int currentRow = i, currentColumn = j;
    int count = 0;
    printf("Menu\n");
    printf("1.Move top right\n");
    printf("2.Top(right side)\n");
    printf("3.Move top left\n");
    printf("4.Top(left side)\n");
    printf("5.Move down left\n");
    printf("6.Down(left side)\n");
    printf("7.Move down right\n");
    printf("8.Down (right side)\n");
    printf("9.Exit\n");

    while (1){
        printf("Enter your choice: \n");    
        scanf("%d", &choice);
        if(choice<0 || choice>8)
        break;
        count++;
        switch (choice){
        case 1:
            tempRow = currentRow - 1;
            tempCol = currentColumn + 2;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 2:
            tempRow = currentRow - 2;
            tempCol = currentColumn + 1;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 3:
            tempRow = currentRow - 2;
            tempCol = currentColumn - 1;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 4:
            tempRow = currentRow - 1;
            tempCol = currentColumn - 2;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 5:
            tempRow = currentRow + 1;
            tempCol = currentColumn - 2;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 6:
            tempRow = currentRow + 2;
            tempCol = currentColumn - 1;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 7:
            tempRow = currentRow + 2;
            tempCol = currentColumn + 1;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        case 8:
            tempRow = currentRow + 1;
            tempCol = currentColumn + 2;
            printf("Move made at: %c %d\n",arr[currentRow][currentColumn],i);
            break;
        
        case 9:
        printf("Total moves: %d\n", count);
        exit(0);
        break;
        }

        if (tempRow < 0 || tempCol < 0 || tempRow >= row || tempCol >= col) {
            printf("Illegal move\n");
            count--;
        }
        else{
           currentRow = tempRow;
           currentColumn = tempCol;
           arr[currentRow][currentColumn] = 'x';
           for(i = 0; i < row; i++){
               for(j = 0; j < col; j++){
                   printf("%c", arr[i][j],i);
               }
               printf("\n");
           }
           printf("Total moves: %d\n", count);
        }
    }
}
