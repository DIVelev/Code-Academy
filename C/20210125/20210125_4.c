#include <stdio.h>

int main(void){
    char c;
    int count = 0;
    
    while((c = getchar())!= EOF){
        if (c == ' '){
            count++;
            if (count > 1){
                continue;
            }
            else{
                if (count == 1){
                putchar(c);
                }
            }
        }
        else{
            count = 0;
            putchar(c);
        }
    }

    return 0;
}