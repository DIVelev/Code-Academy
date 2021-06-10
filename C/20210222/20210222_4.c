#include <stdio.h>
#include <stdlib.h>

/*Задача 4.
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/

struct date{
    int day;
    int month;
    int year;
};

void printDate(struct date date);

int main(void){

    struct date contractdate = {15,2,2000};
    struct date contractdate1 = {.day = 15,.month = 2,.year = 2000};
    struct date contractdate2;
    contractdate2.day = 15;
    contractdate2.month = 2;
    contractdate2.year = 2000;
    printDate(contractdate2);

    return 0;
}

void printDate(struct date date){

    printf("Day: %d\n",date.day);
    printf("Month: %d\n",date.month);
    printf("Year: %d\n",date.year);
}