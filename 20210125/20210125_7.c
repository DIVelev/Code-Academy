#include <stdio.h>
#include <string.h>

int main(void){

    char s[1000],c;
    int i = 0;

    while ((c=getchar())!= EOF){
        if (c != '\n'){
            s[i] = c;
            i++;
        }
        else{
            s[i] = '\0';
            if (i>=80){
                printf("%s\n",s);
            }
            i = 0;
        }
    }

    return 0;
}