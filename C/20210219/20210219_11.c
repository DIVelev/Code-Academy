#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.*/

struct Student{
    char name[size];
    char family[size];
    struct Student *next;
};

int main(void){

    struct Student st = {"Pesho","Peshov"};
    printf("Printing info using st: \n");
    printf("Name: %s\n",st.name);
    printf("Family: %s\n",st.family);

    struct Student st2;
    st2.next = &st;
    printf("Printing using the pointer in structure\n");
    printf("Name: %s\n",st2.next->name);
    printf("Family: %s\n",st2.next->family);

    return 0;
}