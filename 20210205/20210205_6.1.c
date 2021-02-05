#include <stdio.h>

/*Задача 6.Опитайте да го направите сами: strcpy */

void our_strcpy(char *s, char *t){
    int i = 0;
    while ((*s = *t) != '\0'){
        s++;
        t++;
    }
}

int main(void){

    char s[] = "World";
    char t[] = "Hello";

    our_strcpy(s,t);
    printf("%s",s);

    return 0;
}