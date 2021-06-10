#include <stdio.h>

const float PI = 3.14159265359;

float circle_area(float r);
float ellipse_area(float a,float b);

int main()
{
    float area = circle_area(2);
    printf("%.2f \n",area);
    area = ellipse_area(2,5);
    printf("%.2f",area);

    return 0;
}

float circle_area(float r)
{
    return PI*r*r;
}

float ellipse_area(float a,float b)
{
    return PI*a*b;
}
