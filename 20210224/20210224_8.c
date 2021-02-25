#include <stdio.h>
#include <stdlib.h>

/* слепва да идентификатора */
#define MY_CONCAT(x,y) x##y

/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/

int main() {
    
    MY_CONCAT(print,f)("\nThis is test\n");

    return 0;
} 