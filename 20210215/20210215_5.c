#include <stdio.h>
#include <stdlib.h>

/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).
Можете ли да умножите пойнтер по пойнтер?
При тази декларация колко пойнтера имаме:
int *p, k;*/

int main(void){

    //int* pi = &a; - Не се получава да се разместят, защото компютъра чете ред по ред и в този случай променливата a не е дефинирана. 
    int a = 34;
    int* pi = &a;

    int b = 2;
    int* pb = &b;

    //printf("%d",pi*pb); - В този случай умножението е невалидно, защото се опитва да умножим адресите им, а не стойностите.
    printf("a * b = %d",*(pi) * *(pb)); // Това е валидно, защото умножаваме стойностите на поинтърите, а именно - 34 и 2

    //int *p, k; - Декларираме само 1 поинтър - *p, а k е променлива с тип int 
    // Може да се запише още като:
    // int *p;
    // int k;

    return 0;
}