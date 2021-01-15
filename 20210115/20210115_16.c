#include <stdio.h>

const float PI = 3.14159265359;

float circle_area(float r);

int main()
{
    float area = circle_area(1);
    printf("%.2f \n",area);
    area = circle_area(1.5);
    printf("%.2f \n",area);
    area = circle_area(13);
    printf("%.2f",area);

    return 0;
}

float circle_area(float r)
{
    return PI*r*r;
}
