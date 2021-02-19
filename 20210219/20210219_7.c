#include <stdio.h>
#include <stdlib.h>

/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки*/

struct point{
    int x;
    int y;
};

struct point makepoint(int x,int y);
void printPoint(struct point point);

int main(void){

    int x,y;
    struct point p1;
    printf("Enter a valid value for point 1 x:\n");
    scanf("%d",&x);
    printf("Enter a valid value for point 1 y:\n");
    scanf("%d",&y);
    p1 = makepoint(x,y);
    printf("First point cordinates: \n");
    printPoint(p1);

    printf("Enter a valid value for point 2 x:\n");
    scanf("%d",&x);
    printf("Enter a valid value for point 2 y:\n");
    scanf("%d",&y);

    struct point p2;
    p2 = makepoint(x,y);
    printf("Second point cordinates: \n");
    printPoint(p2);

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