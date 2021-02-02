#include <stdio.h>

/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/

int any(char s1[], char s2[]);

int main(void){

    char s1[] = "some text here";
    char s2[] = "test";

    printf("First occurrence of s2 in s1 is in element %d of s1\n",any(s1,s2));

    return 0;
}

int any(char s1[], char s2[]){

    int i,j;
    
    for (i=0;s1[i]!='\0';i++){

        for(j=0;s2[j]!='\0';j++){

            if(s1[i] == s2[j]){

            printf("The same character is: %c\n",s1[i]);
            return i;

            }  
        }
        
    }

    return -1;
}