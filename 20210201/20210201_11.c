#include <stdio.h>
#include <string.h>

/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/

void squeeze(char s[], int c);

int main(void){

    char s[] = "string";
    int c = 105;

    squeeze(s,c);

    return 0;
}

void squeeze(char s[], int c){

    int i = 0,j = 0,len = strlen(s);

    for(i=0;i<len;i++){

        if(s[i] == c){

            for (j=i;j<len;j++,i++){
                s[i] = s[j+1];
            }

            len--;
        }
    }
    
    printf("%s",s);

}