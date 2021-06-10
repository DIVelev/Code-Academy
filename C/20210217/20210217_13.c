#include <stdio.h>
#include <stdlib.h>
#define size 100
/*Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/

char* reverse(char* arr);
int length(char *arr);

int main(void){

    char s[size];
    printf("Enter a string:\n");
    gets(s);
    printf("Your string is: \n");
    puts(s);
    char *r;
    r = reverse(s);
    printf("String after using reverse: \n");
    puts(r);

    return 0;
}

char* reverse(char* arr){

    int i;
    char *begin,*end,temp;

    end = arr;

    while(*end){
        end++;
    }

    if(arr != end){

        for(begin = arr; begin< --end;++begin){
        temp = *end;
        *end = *begin;
        *begin = temp;
        }
    }

    return arr;
}

int length(char *arr){

    int length;
    while(*(arr+length) != '\0'){
        length++;
    }

    return length;
}