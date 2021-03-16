#include "opashka.h"

int main(void){

   unsigned int n = 1;
    while(n){
        printf("Enter a digit: \n");
        scanf("%u",&n);
        if(n == 0){
            break;
        }
        write(n);
    }

    while(read(&n)){
        printf("%u\t",n);
    }

    return 0;
}