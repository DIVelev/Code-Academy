#include <stdio.h>
#include <string.h>

/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */

void lower(char s[]);

int main(void){

    char s[] = "tEsTiNg";
    printf("Before function: %s\n",s);
    lower(s);

    return 0;
}

void lower(char s[]){

    int i=0;

    for(i;i<strlen(s);i++){
        if(s[i] >= 'A' && s[i]<= 'Z'){
            s[i] = s[i] + 32;
        }
    }

    printf("After function: %s\n",s);

}