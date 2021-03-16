#include "20210315_2.h"

/*Задача 2
● Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T)*/

tree* root = NULL;

int main(void){

    insertKey(2,&root);
    insertKey(6,&root);
    insertKey(1,&root);

    orderTree(root);

    return 0;
}