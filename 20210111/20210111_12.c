#include <stdio.h>

int main(void)
{
    unsigned int a = 255;
    unsigned int index = 3;
    unsigned int mask = 1u<<index;
    a ^= mask;
    index = index + 3; //6
    mask = 1u<<index;
    a ^= mask;
    printf("%d",a);

}
