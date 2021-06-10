#include <stdio.h>

void obarniBitna(unsigned *number, int index);

int main(void)
{
    unsigned int n = 6;
    obarniBitna(&n,3);
    printf("%d",n);
    return 0;

}

void obarniBitna(unsigned *number, int index)
{
    *number ^= (1u<<index);
}
