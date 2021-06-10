#include <stdio.h>

int main(void)
{
    int iX = 13;
    int iY = 44;
    int iResult = 0 ;
    iResult = iX - iY;
    printf("%d - %d = %d\n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d\n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult);
    
    float fX = 2.563;
    float fY = 3.446;
    float rez = 0;
    // * с float
    rez = fX * fY;
    printf("%f * %f = %f\n",fX,fY,rez);

    // + с float
    rez = fX + fY;
    printf("%f + %f = %f\n",fX,fY,rez);

    return 0;
}

/* homework: examples for '*' и '+', float - използвайте вместо int */
