#include <stdio.h>

int main()
{
    float a = 4.9876543;
    printf("%f \n",a);
    long double b = 7.123456789012345678890;
    __mingw_printf("%.22Lf\n",b);
    long double c = 18398458438583853.28;
    __mingw_printf("%17.2Lf\n",c);
    long double d = 18398458438583853.39875937284928422;
    __mingw_printf("%17.17Lf\n",d);
    return 0;
}
