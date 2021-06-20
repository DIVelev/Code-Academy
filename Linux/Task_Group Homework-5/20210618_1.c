/* Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4. */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

void fCopyString(char *to, char *from){
    while(*from){
        *to++ = *from++;
    }
    *to = '\0';
}
int main(int argc, char *argv[]){  
    
    if(argc < 3){
        exit(2);
    }

    char *string1 = argv[1];

    int s1Len = strlen(string1) + 1;
    
    char string2[s1Len];
    
    char *string3 = argv[2];
    int s3Len = strlen(string3) + 1;

    char string4[s3Len];

  
    fCopyString(string2, string1);
    printf("%s\n", string2);
    if(strcmp(string2, string1)!=0){
        exit(3);
    }

    fCopyString(string4, string3);
    printf("%s\n", string4);
    if(strcmp(string3, string4)!=0){
        exit(4);
    }

    fCopyString(string4, string1);
    printf("%s\n", string4);
    if(strcmp(string1, string4)!=0){
        exit(5);
    }

    if(strcmp(string2, string4)!=0){
        exit(6);
    }
    return 0;
}