#include <stdio.h>
#include <stdlib.h>

/*Задача 9. Направете функця add(), която събира две точки.*/

struct point{
    int x;
    int y;
};

struct point makepoint(int x,int y);
struct point add(struct point p1,struct point p2);
void printPoint(struct point point);

int main(void){

    int x,y;
    printf("Enter X for point 1: \n");
    scanf("%d",&x);
    printf("Enter Y for point 1: \n");
    scanf("%d",&y);
    struct point p1 = makepoint(x,y);
    printf("Point 1 cordinates: \n");
    printPoint(p1);

    printf("Enter X for point 2: \n");
    scanf("%d",&x);
    printf("Enter Y for point 2: \n");
    scanf("%d",&y);
    struct point p2 = makepoint(x,y);
    printf("Point 2 cordinates: \n");
    printPoint(p2);

    struct point result = add(p1,p2);
    printf("Result point after adding p1 and p2: \n");
    printPoint(result);

    return 0;
}

struct point makepoint(int x,int y){

    struct point p;
    p.x = x;
    p.y = y;

    return p;
}

struct point add(struct point p1,struct point p2){

    struct point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

void printPoint(struct point point){

    printf("Point x = %d\n",point.x);
    printf("Point y = %d\n",point.y);
}