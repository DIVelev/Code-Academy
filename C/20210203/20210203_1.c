#include <stdio.h>

/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/

/*Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/

int main(void){

    char arrChar[4] = {'A','B','C','\0'};
    int arrInt[3] = {1,2,3};
    double arrDouble[3] = {1.2,2.4,3.6};

    printf("Char: %d Bytes\n",sizeof(arrChar));
    printf("Int: %d Bytes\n",sizeof(arrInt));
    printf("Double: %d Bytes\n",sizeof(arrDouble));

    printf("Last element of char: %c \n",arrChar[2]);
    printf("Last element of int: %d \n",arrInt[2]);
    printf("Last element of double: %lf \n",arrDouble[2]);

    return 0;
}