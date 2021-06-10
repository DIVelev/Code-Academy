#include "f.h"

int calculateLCM(unsigned int a, unsigned int b)
{
    int i,gcd;
    for (i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        gcd = i;
    }

    return (a*b)/gcd;
}

float absoluteValue(float c)
{
    return fabs(c);
}

float squareRoot(float d)
{

    if (d < 0)
    {
        return -1;
    }
    return sqrt(d);
}