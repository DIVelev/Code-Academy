#include <stdio.h>
#include <stdlib.h>

/*Задача 9. Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?
Вземете бележката от масата, на нея пише в кое чекмедже (на скрина)
ще намерите бележката, на която пише къде е палтото (в гардероба);
Обърнете внимание на броя на звездичките!*/

int main(void){

    int a = 5;
    int *pi = &a;
    int **ppi = &pi;
    **ppi = 15;
    printf("Address of a is: %p\n",&a);
    printf("Address of the first pointer is %p, and the first pointer is: %d\n",pi,*pi);
    printf("Address of the second pointer is %p, and the second pointer is: %d\n",ppi,**ppi);
    printf("a equals to: %d",a);

    return 0;
}