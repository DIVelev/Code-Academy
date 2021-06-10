#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void){

    char s[100],c;
    int i=0;
    while ((c=getchar())!= EOF){
        if(c != '\n'){
            s[i] = c;
            i++;
        }
        else{
            s[i] = '\0';
            reverse(s);
            i = 0;
        }

    }

    return 0;
}

void reverse(char s[]){

    int end = strlen(s) - 1;

    for (end; end >= 0; end--){
        printf("%c",s[end]);
    }
 
   /* char temp;

    for (int start = 0; start < end; start++, end--){
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
    } */

}