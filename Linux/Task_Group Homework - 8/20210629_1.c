#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

#define MY_STR(x) #x

/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/

int main(int argc, char *argv[]){  

    /* check if the arguments are more than 3 */
    if(argc > 2){
        exit(2);
    }
    
    errno = 0;
    char *p;
    int nValue = 0;

    long conv = strtol(argv[1], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(3);
    }
    else{
        nValue = conv;
    }
    printf("%d\n", nValue);
    printf("Using macro of declarion of the string is: \n");
    printf(MY_STR(nValue));
    printf("\n");
   
    return 0;
}