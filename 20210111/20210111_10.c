#include <stdio.h> 

int main(){

    int mask = 255;
    int pos = 3;
    int a = 203;
    mask = mask>>pos;
    a &= mask;
    printf("%d",a);

    return 0;
}
