#include <stdio.h>
#include <stdlib.h>

#define MY_STR(x) #x

/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/

int main(){

    int nValue = 0;
    float b = 4.3;
    printf(MY_STR(b));

    return 0;
}