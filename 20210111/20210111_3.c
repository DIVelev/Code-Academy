#include <stdio.h>

void iz4istiBitna(unsigned *number, int index);

int main(void)
{
    unsigned int a = 15;
    iz4istiBitna(&a,2);
    printf("%d",a);

}

void iz4istiBitna(unsigned *number, int index)
{
    unsigned mask = ~(1u<<index);
    *number &= mask;
}

