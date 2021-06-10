#include <stdio.h>

/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */

void our_strcat(char *s, char *t);

int main(void){

    char s[] = "Hello";
    char t[] = "World";

    our_strcat(s,t);
    
    printf("%s",s);

    return 0;
}

void our_strcat(char *s, char *t){

    for(;*s;s++){

    }

    for(;*t;t++,s++){
        *s = *t;
    }

}