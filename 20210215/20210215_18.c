#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 100

/*Задача 18. Връщаме се на кода написан в задача 15. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.*/

void copyString(char *from,char *to);

int main(void){

    int fromLen = 0;
    char s1[] = "A string to be copied.";
    char s3[] = "I am very good in strings coping!";
    char s2[L],s4[L];
    
    fromLen = strlen(s1);
    printf("Length of s1: %d\n",fromLen);
    if (L < fromLen){
        printf("Not enought space to copy the string\n");
    }else{
        copyString((s1 + fromLen - 1),(s4 + fromLen - 1));
        printf("Copied string s1 is: %s\n",s4);
    }

    fromLen = strlen(s3);
    printf("Length of s3: %d\n",fromLen);
    if (L < fromLen){
        printf("Not enought space to copy the string\n");
    }else{
        copyString((s3 + fromLen - 1),(s2 + fromLen - 1));
        printf("Copied string s3 is: %s\n",s2);
    }
    
    return 0;
}

void copyString(char *from,char *to){

    while(*from){
        *to-- = *from--;
    }

    *to = '\0';

}