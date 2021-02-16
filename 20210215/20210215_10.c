#include <stdio.h>
#include <stdlib.h>

/*Задача 10.
Как работи? Дефинираме променлива “а“, дефинираме
пойнтер, но още не му задаваме стойност. Отпечатайте
адреса на “а”. След това присвояваме стойност на
пойнтера, като внимаваме типовете на пойнтера и
променливата да са от един и същи тип. Отпечатваме
на екрана стойността на пойнтера с %р, стойността на
„а“ с %d, стойността на *ptr с %d.*/

int main(void){

    int a,*ptr;
    printf("Address of a is: %p\n",&a);
    ptr = &a;
    *ptr = 5;
    printf("Address of pointer is %p\n",ptr);
    printf("a equals to: %d\n",a);
    printf("*ptr equals to: %d\n",*ptr);


    return 0;
}