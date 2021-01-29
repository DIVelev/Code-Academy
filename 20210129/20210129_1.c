#include <stdio.h>

/*Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата. */

extern float PI;

float circleArea(float r);

int main(void){

    float r,area;

    printf("Enter a radius: \n");
    scanf("%f",&r);
    area = circleArea(r);
    printf("Area: %f\n",area);

    return 0;
}

float PI = 3.14;

float circleArea(float r){

    return PI*(r*r);

}