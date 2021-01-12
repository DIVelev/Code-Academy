#include <stdio.h>

int main(void)
{
    unsigned int a = 20;
    unsigned int index = 4;
    a ^= (1u<<index);
    printf("%d",a);

}
