#include <stdio.h>

int main(void){

    char c;

    while((c=getchar())!= EOF){
        if (c == ' ' || c == '\t' ){
            continue;
        }
        else{
            putchar(c);        
        }
    }

    return 0;
}