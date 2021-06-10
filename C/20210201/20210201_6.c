#include <stdio.h>

/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30 */

unsigned int sum(int a,int b);

int main(void){

    printf("Result is: %d",sum(1,30));

    return 0;
}

unsigned int sum(int a,int b){

    unsigned int sum = 1;

    for (a;a<=b;a++){
        sum = sum * a;
    }

    return sum;
}