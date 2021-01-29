#include <stdio.h>

/* Задача 3. Напишете функция, която връща резултат (а+в)*4 */

float result(float a,float b);

int main(void){

    float a,b,res = 0;
    printf("Enter a value for A: \n");
    scanf("%f",&a);
    printf("Enter a value for B: \n");
    scanf("%f",&b);
    res = result(a,b);
    printf("Result : %f \n",res);

    return 0;
}

float result(float a,float b){

    return (a+b)*4;

}