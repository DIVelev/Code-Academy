#include <stdio.h>

int main(void)
{
    unsigned int a = 254;
    unsigned int index = 2;
    unsigned int mask = ~(1u<<index);
    a &= mask;
    index = index + 2; //4
    mask = ~(1u<<index);
    a &= mask;
    index = index + 2; //6
    mask = ~(1u<<index);
    a &= mask;
    printf("%d",a);

}
