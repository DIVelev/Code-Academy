
#include <stdio.h>

void iz4istiBitna(unsigned int *n, int index);

int main(void) { 
    unsigned x = 15;
    iz4istiBitna(&x,1);
    printf("%d\n", x);
    return 0;
}

void iz4istiBitna(unsigned int *n, int index){
    unsigned mask = ~(1 << index);
    *n = *n & mask;
    return;
}
