#include <stdio.h>
#include <stdlib.h>
#define row 7
#define col 7
 
/* Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F  */
 
int board[7][7] = {
    {3, 3, 2, 4, 3, 1, 2},
    {2, 4, 2, 3, 2, 4, 3},
    {4, 2, 3, 2, 4, 2, 1},
    {4, 4, 1, 2, 2, 3, 4},
    {3, 2, 3, 3, 4, 2, 2},
    {3, 2, 4, 2, 3, 2, 1},
    {1, 1, 3, 3, 4, 2, 70}
};
 
void menu();
void printBoard();
int checkMove(int board[][col],int move,int number,int startPosI,int startPosJ);
int makeMove(int board[][col],int move,int number,int startPosI,int startPosJ);
 
int main(void){
 
    menu();
 
    return 0;
}
 
void menu(){
 
    int choice,number,move,validMove;
    int startPosI = 0;
    int startPosJ = 0;
 
    number = board[startPosI][startPosJ];
    menu:
    printBoard(board);
    printf("Menu\n");
    printf("1.Make a turn\n");
    printf("2.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        move:
        printf("You can move %d positions in one direction \n",number);
        printf("Choose a way to move:\n");
        printf("1.Up\n");
        printf("2.Down\n");
        printf("3.Left\n");
        printf("4.Right\n");
        printf("5.Return to menu\n");
        scanf("%d",&move);
        switch(move){
            case 1:
            validMove = checkMove(board,move,number,startPosI,startPosJ);
            if(validMove == 1){
                number = makeMove(board,move,number,startPosI,startPosJ);
                startPosI = startPosI - number;
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;
 
            case 2:
            validMove = checkMove(board,move,number,startPosI,startPosJ);
            if(validMove == 1){
                number = makeMove(board,move,number,startPosI,startPosJ);
                startPosI = startPosI + number;
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;
 
            case 3:
            validMove = checkMove(board,move,number,startPosI,startPosJ);
            if(validMove == 1){
                number = makeMove(board,move,number,startPosI,startPosJ);
                startPosJ = startPosJ - number;
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;
 
            case 4:
            validMove = checkMove(board,move,number,startPosI,startPosJ);
            if(validMove == 1){
                number = makeMove(board,move,number,startPosI,startPosJ);
                startPosJ = startPosJ + number;
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;
 
            case 5:
            goto menu;
            break;
 
        }
 
        case 2:
        printf("Thank you for playing\n");
        exit(0);
        break;
    }
 
}
 
int checkMove(int board[][col],int move,int number,int startPosI,int startPosJ){
 
    if(move == 1){
        if(board[startPosI-number][startPosJ] != 0 && startPosI - number >= 0){
            if(board[startPosI-number][startPosJ] != 80){
                printf("Move succesfully made\n");
                return 1;
            }
        }
        else{
            return 0;
        }
    }
 
    if(move == 2){
        if(board[startPosI+number][startPosJ] != 0 && startPosI + number <= row){
            if(board[startPosI+number][startPosJ] != 80){
                printf("Move succesfully made\n");
                return 1;
            }
        }
        else{
            return 0;
        }
    }
 
    if(move == 3){
        if(board[startPosI][startPosJ-number] != 0 && startPosJ-number >= 0){
            if(board[startPosI][startPosJ-number] != 80){
                printf("Move succesfully made\n");
                return 1;
            }
        }
        else{
            return 0;
        }
    }
 
    if(move == 4){
        if(board[startPosI][startPosJ+number] != 0 && startPosJ + number <= col){
            if(board[startPosI][startPosJ+number] != 80){
            printf("Move succesfully made\n");
            return 1;
            }
        }
        else{
            return 0;
        }
    }
 
}
 
int makeMove(int board[][col],int move,int number,int startPosI,int startPosJ){
    
    static int oldBoard[7][7];
    int i,j,validMove,choice;
    int newNumber;
 
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            oldBoard[i][j] = board[i][j];
        }
    }
 
    if(move == 1){
        validMove = checkMove(board,move,number,startPosI,startPosJ);
        if(validMove == 1){
            if(board[startPosI - number][startPosJ] != 0){
                if (board[startPosI - number][startPosJ] == 70){
                    printf("You won");
                    exit(0);
                }
                if(board[startPosI - number][startPosJ] != 80){
                    newNumber = board[startPosI - number][startPosJ];
                    board[startPosI - number][startPosJ] = 80;
                    number = newNumber;
                }
            }
        }
    }
 
    if(move == 2){
        validMove = checkMove(board,move,number,startPosI,startPosJ);
        if(validMove == 1){
            if(board[startPosI+number][startPosJ] != 0){
                if (board[startPosI + number][startPosJ] == 70){
                    printf("You won");
                    exit(0);
                }
                if(board[startPosI+number][startPosJ] != 80){
                    newNumber = board[startPosI + number][startPosJ];
                    board[startPosI+number][startPosJ] = 80;
                    number = newNumber;
                }
            }
        }
    }
 
    if(move == 3){
        validMove = checkMove(board,move,number,startPosI,startPosJ);
        if(validMove == 1){
            if(board[startPosI][startPosJ-number] != 0){
                if (board[startPosI][startPosJ-number] == 70){
                    printf("You won");
                    exit(0);
                }
                if(board[startPosI][startPosJ-number] != 80){
                    newNumber = board[startPosI][startPosJ-number];
                    board[startPosI][startPosJ-number] = 80;
                    number = newNumber;
                }
            }
        }
    }
 
    if(move == 4){
        validMove = checkMove(board,move,number,startPosI,startPosJ);
        if(validMove == 1){
            if(board[startPosI][startPosJ+number] != 0){
                if (board[startPosI][startPosJ+number] == 70){
                    printf("You won");
                    exit(0);
                }
                if(board[startPosI][startPosJ+number] != 80){
                    newNumber = board[startPosI][startPosJ+number];
                    board[startPosI][startPosJ+number] = 80;
                    number = newNumber;
                }
            }
        }
    }
 
    printBoard(board);
    printf("Do you want to rewind your move? - Press 1 for yes or 2 for now\n");
    scanf("%d",&choice);
    while(choice <= 0 && choice >= 3){
        printf("Enter a valid choice - Press 1 for yes or 2 for now\n");
        scanf("%d",&choice);
    }
    switch(choice){
        case 1:
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                board[i][j] = oldBoard[i][j];
            }
        }
        number = board[startPosI][startPosJ];
        return number;
        break;
 
        case 2:
        return number;
        break;
    }
 
}
 
void printBoard(){
 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(board[i][j] == 80 || board[i][j] == 70){
            printf("%c\t",board[i][j]);
            }
            else{
            printf("%d\t",board[i][j]);
            }
        }
        printf("\n");
    }
 
}
