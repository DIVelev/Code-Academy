#include <stdio.h>

int main(void){
    char c;
    int letters = 0, numbers = 0;
    
    while((c=getchar()) != EOF){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            letters++;
        }
        else{
            if (c >= '0' && c <= '9')
            numbers++;
            continue;
        }
    }

    printf("Letters: %d\nNumbers: %d\n",letters,numbers);

    return 0;
}