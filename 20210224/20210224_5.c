#include <stdio.h>
#include <stdlib.h>

#ifdef DEBUG
    /* условна компилация */
    #define DEBUGMSG(msg) \
    { printf("DEBUG: %s\n", (msg)); }
#else
    #define DEBUGMSG(msg)
#endif

/*Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/

int main(void){

    DEBUGMSG("Hello");

    return 0;
}