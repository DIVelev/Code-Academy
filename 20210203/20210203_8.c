#include <stdio.h>

/*Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива*/

int main(void){

    int arr[10] = {100,90,80,70,60,50,40,30,20,10};
    int *p = arr; // p = 0
    *(p+2) = 5; // p = 2 - 3 елемент
    *(p+3) = 33; // p = 3 - 4 елемент 
    *(p+4) = *(p+4) - 7; // p = 4 - 5 елемент
    *(p+6) = *(p+6) + 10;// p = 6 - 7 елемент
    *(p+9) = *(p+9) * 3;// p = 9 - 10 елемент

/*  arr[2] = 5;
    arr[3] = 33;
    arr[4] = arr[4] - 7;
    arr[6] = arr[6] + 10;
    arr[9] = arr[9] * 3; */

    int i = 1;
    while(i<11){
        printf("%d element is: %d\n",i,*p); // Вместо *p може да е arr[i-1]
        i++;
        *p++;
    }
    
    return 0;

}