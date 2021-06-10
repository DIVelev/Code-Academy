#include <stdio.h>
#include <stdlib.h>
#define traceTest(...) printf("TRACE: " __VA_ARGS__)

/*Задача 4. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/

/* добавя префикс към функцията printf */
int main(void){

    traceTest("My favourite numbers are : %d, %d, %d\n",3, 7, 21);

    return 0;
}