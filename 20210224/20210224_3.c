#include <stdio.h>
#include <stdlib.h>

/*Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)*/

void debugMsg(const char *pszMsg){

#ifdef DEBUG
    printf("DEBUG: %s\n", pszMsg);
#endif

}

int main(void){

    debugMsg("Lalala");


    return 0;
}