#include <stdio.h>

int main(void)
{
    unsigned int a = 85;
    unsigned int index = 3;
    unsigned int mask = ~(1u<<index);
    a &= mask;
    index = index + 1; //4
    mask = ~(1u<<index);
    a &= mask;
    index = index + 1; //5
    mask = ~(1u<<index);
    a &= mask;
    index = index + 1; //6
    mask = ~(1u<<index);
    a &= mask;
    index = index + 1; //7
    mask = ~(1u<<index);
    a &= mask;
    printf("%d",a);

}
