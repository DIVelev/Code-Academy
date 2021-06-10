#include <stdio.h>
#include <stdlib.h>

/*Задача 13.
Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/

int main(void){

    char s[100],*pC;
    int i;
    printf("Enter a string: \n");
    gets(s);
    printf("You entered %s\n",s);
    pC = s;

    for(;*pC;pC++){
        i++;
    }

    printf("Length of the string is: %d",i);

    return 0;
}