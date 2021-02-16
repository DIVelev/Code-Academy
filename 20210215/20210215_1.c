#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"
Декларирането на static масив в скоупа на функцията означава, че ще бъде
видимо името му в целия файл и ще продължи да живее и след излизане от скоупа на
функцията след края на програмата. Функцията връща указател към съответния месец,
отговарящ на параметъра n.*/

char *month_name(int n);

int main(void){

    int n;
    printf("Enter the number of the month:\n");
    scanf("%d",&n);
    while(n<0 || n>12){
        printf("Enter a valid month\n");
        scanf("%d",&n);
    }
    printf("Your month is : %s",month_name(n));

    return 0;
}

char *month_name(int n){

    static char *name[] = {
        "Illegal month",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    return name[n];
}