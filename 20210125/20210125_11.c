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
            printf("%s\n",s);
            i = 0;
        }

    }

    return 0;
}

void reverse(char s[]){

    int i,j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

}