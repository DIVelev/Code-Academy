#include "p.h"

/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл */

int main(void){

    float a,b;
    printf("Enter a value for a: \n");
    scanf("%f",&a);
    printf("Enter a value for b: \n");
    scanf("%f",&b);
    add(a,b);

    return 0;
}