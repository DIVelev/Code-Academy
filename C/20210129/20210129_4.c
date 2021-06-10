#include <stdio.h>

/* Задача 4. Напишете функция, която връща резултат a*2 + b*c. */

float result(float a,float b,float c);

int main(void){

    float a,b,c,res = 0;
    printf("Enter a value for A: \n");
    scanf("%f",&a);
    printf("Enter a value for B: \n");
    scanf("%f",&b);
    printf("Enter a value for C: \n");
    scanf("%f",&c);
    res = result(a,b,c);
    printf("Result : %f \n",res);

    return 0;
}

float result(float a,float b,float c){

    return a*2 + b*c;

}