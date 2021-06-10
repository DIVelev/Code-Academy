#include <stdio.h>

int main(void)
{
    int nResult = 13; /* опитайте с други стойности */
    int nX = 4;
    printf("Result = %d\n",nResult);
    nResult += nX;
    printf("Result += %d -> %d\n",nX,nResult);
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n",nX,nResult);
    /* използвайте и други оператори за присвояване */

    nResult = 5;
    printf("Result = %d\n",nResult);
    nResult *= nX;
    printf("Result *= %d -> %d\n",nX,nResult);

    nResult = 8;
    printf("Result = %d\n",nResult);
    nResult /= nX;
    printf("Result /= %d -> %d\n",nX,nResult);

    nResult = 12;
    printf("Result = %d\n",nResult);
    nResult %= nX;
    printf("Result /= %d -> %d\n",nX,nResult);

    return 0;
}
