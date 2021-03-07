#include <stdio.h>
#include <stdlib.h>
 
/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки.*/
 
typedef struct shelf{
    int longBoard;
    int shortBoard;
    int bigBracket;
    int smallBracket;
    int screw;
}shelves;
 
shelves* fillShelves();
void printShelves(shelves *shelf);
int madeShelves(shelves *shelf);
 
int main(void){
 
    int shelvesMade;
    shelves *shelf = (shelves*)malloc(sizeof(shelves));
    shelf = fillShelves();
    printShelves(shelf);
    shelvesMade = madeShelves(shelf);
    printf("Number of shelves that were made: %d\n",shelvesMade);
 
    free(shelf);
    return 0;
}
 
shelves* fillShelves(){
 
    shelves *shelf = (shelves*)malloc(sizeof(shelves));
    printf("Enter the number of long boards: \n");
    scanf("%d",&shelf->longBoard);
    while(shelf->longBoard < 0){
        printf("Enter a valid number for long boards: \n");
        scanf("%d",&shelf->longBoard);
    }
    printf("Enter the number of short boards: \n");
    scanf("%d",&shelf->shortBoard);
    while(shelf->shortBoard < 0){
        printf("Enter a valid number for short boards: \n");
        scanf("%d",&shelf->shortBoard);
    }
    printf("Enter the number of big brackets: \n");
    scanf("%d",&shelf->bigBracket);
    while(shelf->longBoard < 0){
        printf("Enter a valid number for big brackets: \n");
        scanf("%d",&shelf->bigBracket);
    }
    printf("Enter the number of small brackets: \n");
    scanf("%d",&shelf->smallBracket);
    while(shelf->longBoard < 0){
        printf("Enter a valid number for small brackets: \n");
        scanf("%d",&shelf->smallBracket);
    }
    printf("Enter the number of screws: \n");
    scanf("%d",&shelf->screw);
    while(shelf->longBoard < 0){
        printf("Enter a valid number for screws: \n");
        scanf("%d",&shelf->screw);
    }
 
    return shelf;
}
 
void printShelves(shelves *shelf){
    printf("Number of long boards: %d\n",shelf->longBoard);
    printf("Number of short boards: %d\n",shelf->shortBoard);
    printf("Number of big brackets: %d\n",shelf->bigBracket);
    printf("Number of small brackets: %d\n",shelf->smallBracket);
    printf("Number of screws: %d\n",shelf->screw);
}
 
int madeShelves(shelves *shelf){
 
    int madeShelves;
    while(shelf->longBoard >= 4 && shelf->shortBoard >= 6 && shelf->smallBracket >= 12 && shelf->bigBracket >= 2 && shelf->screw >= 14){
        madeShelves++;
        shelf->longBoard = shelf->longBoard - 4;
        shelf->shortBoard = shelf->shortBoard - 4;
        shelf->smallBracket = shelf->smallBracket - 12;
        shelf->bigBracket = shelf->bigBracket - 2;
        shelf->screw = shelf->screw;
    }
 
    return madeShelves;
}
