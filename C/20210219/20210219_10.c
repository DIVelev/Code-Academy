#include <stdio.h>
#include <stdlib.h>

/*Задача 10. Направете два триъгълника с отместване.*/

struct point{
    int x;
    int y;
};

struct triangle{
    struct point start;
    struct point end;
};

struct point makepoint(int x,int y);
void printPoint(struct point point);

int main(void){

    int x,y,i,j;
    printf("Starting X of the triangle: \n");
    scanf("%d",&x);
    printf("Starting Y of the triangle: \n");
    scanf("%d",&y);
    struct triangle start;
    start.start = makepoint(x,y);
    printf("Starting point of the triangle: \n");
    printPoint(start.start);

    printf("Final X of the triangle: \n");
    scanf("%d",&x);
    printf("Final Y of the triangle: \n");
    scanf("%d",&y);
    struct triangle end;
    end.end = makepoint(x,y);
    printPoint(end.end);

    for(i=start.start.x;i<=end.end.x;i++){
        for(j=start.start.y;j<=i;j++){
            printf("*");
        }

        for(j=i;j<end.end.x + 1;j++){
            printf("  ");
        }

        for(j=start.start.y;j<=i;j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

struct point makepoint(int x,int y){

    struct point p;
    p.x = x;
    p.y = y;

    return p;
}

void printPoint(struct point point){

    printf("Point x = %d\n",point.x);
    printf("Point y = %d\n",point.y);
}