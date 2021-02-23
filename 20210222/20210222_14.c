#include <stdio.h>
#include <stdlib.h>

/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/

struct date{
    unsigned int d: 5; // от 1 до 31 - 5 бит-а стигат
    unsigned int m: 4; // от 1 до 12 - 4 бит-а стигат 
    unsigned int y: 20; // 20 бит-а, максималната стойност на които е 1 048 576
};

struct date validateDate(struct date date);
void printDate(struct date date);

int main(void){

    struct date date;
    printf("Size of date struct is: %d bytes\n",sizeof(date));
    date = validateDate(date);
    printDate(date);

    return 0;
}

struct date validateDate(struct date date){

    unsigned int day,month,year;
    printf("Enter day: \n");
    scanf("%d",&day);
    while(day <= 0 || day > 31){
        printf("Enter a valid day:\n");
        scanf("%d",&day);
    }
    date.d = day;

    printf("Enter month: \n");
    scanf("%d",&month);
    while(month < 1 || month > 12){
        printf("Enter a valid month:\n");
        scanf("%d",&month);
    }
    date.m = month;

    printf("Enter year: \n");
    scanf("%d",&year);
    while(year < 0){
        printf("Enter a valid year:\n");
        scanf("%d",&year);
    }
    date.y = year;

    return date;
}

void printDate(struct date date){

    printf("Day: %d\n",date.d);
    printf("Month: %d\n",date.m);
    printf("Year: %d\n",date.y);
}