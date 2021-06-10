#include <stdio.h>
#include <stdlib.h>

/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/

struct point{
    int x;
    int y;
};

struct rect{
    struct point start;
    struct point end;
};

struct point makepoint(int x,int y);


int main(void){

    struct rect screen;
    int i,j;
    
    screen.start = makepoint(0,0);
    screen.end = makepoint(15,15);

    for(i=screen.start.x;i<screen.end.x;i++){
        for(j=screen.start.y;j<screen.end.y;j++){
            printf("-");
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