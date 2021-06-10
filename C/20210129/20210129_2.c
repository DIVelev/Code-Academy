#include <stdio.h>

/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */

extern float PI;

float circleArea(float r);
void area();

int main(void){

    area();

    return 0;
}

float PI = 3.14;

float circleArea(float r){

    return PI*(r*r);

}

void area(){
    
    double r,area;

    printf("Enter a radius: \n");
    scanf("%lf",&r);
    area = circleArea(r);
    printf("Area: %lf\n",area);

}