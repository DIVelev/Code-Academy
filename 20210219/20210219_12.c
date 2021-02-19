#include <stdio.h>
#include <stdlib.h>

/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/

struct TPoint{
    int x;
    int y;
};

struct TPoint distance(struct TPoint point1,struct TPoint point2);
void printPoint(struct TPoint point);
struct TPoint makepoint(int x,int y);

int main(void){

    int x1,y1,x2,y2;
    printf("Enter X for point 1: \n");
    scanf("%d",&x1);
    printf("Enter Y for point 1: \n");
    scanf("%d",&y1);
    struct TPoint p1 = makepoint(x1,y1);
    printf("Point 1 cordinates: \n");
    printPoint(p1);

    printf("Enter X for point 2: \n");
    scanf("%d",&x2);
    printf("Enter Y for point 2: \n");
    scanf("%d",&y2);
    struct TPoint p2 = makepoint(x2,y2);
    printf("Point 2 cordinates: \n");
    printPoint(p2);

    struct TPoint result;
    result = distance(p1,p2);
    

    return 0;
}

struct TPoint distance(struct TPoint point1,struct TPoint point2){

    struct TPoint result;
    if(point1.x > point2.y){
        result.x = point1.x - point2.x;
    }
    else{
        result.x = point2.x - point1.x;
    }
    if(point1.y > point2.y){
        result.y = point1.y - point2.y;
    }
    else{
        result.y = point2.y - point1.y;
    }
    printf("Distance for X is: %d\n",result.x);
    printf("Distance for Y is: %d\n",result.y);

    return result; 

}

void printPoint(struct TPoint point){

    printf("Point x = %d\n",point.x);
    printf("Point y = %d\n",point.y);
}

struct TPoint makepoint(int x,int y){

    struct TPoint p;
    p.x = x;
    p.y = y;

    return p;
}