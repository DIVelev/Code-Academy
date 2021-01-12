#include <stdio.h>

void iz4istiBitna(unsigned *number, int index);

int main(void)
{
    unsigned int a = 20;
    iz4istiBitna(&a,5);
    printf("%d",a);

}

void iz4istiBitna(unsigned *number, int index)
{
    *number ^= (1u<<index);
}
