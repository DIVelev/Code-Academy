#include "20210315_5.h"

/*Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво.*/

tree *root = NULL,*result;

int main(void){

    add(5);
    add(6);
    add(1);
    result = search_rec(root,5);
    printf("Result: %d\n",result->data);

    return 0;
}