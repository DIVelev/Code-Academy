#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 100

/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.
Продължение:
Опитайте какво ще стане, ако изпишем инкрементирането така:
*++to= *++from;*/

void copyString(char *from,char *to);

int main(void){

    char s1[] = "A string to be copied.";
    char s3[] = "I am very good in strings coping!";
    char s2[L],s4[L];
    copyString(s1,s4);
    printf("Copied string s1 is: %s\n",s4);
    copyString(s3,s2);
    printf("Copied string s3 is: %s\n",s2);
    
    return 0;
}

void copyString(char *from,char *to){

    while(*from){
        *to = *from;
        to++;
        from++;
        //*++to = *++from; // Пропуска се първият символ от двата стринга, защото променливата се инкрементира.
    }

    *to = '\0';

}
