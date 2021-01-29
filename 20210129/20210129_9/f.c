#include "p.h"

void add(float a,float b){
    float result = 0;
    result = a+b;
    printf("Result of the first function add: %f\n",result);
    printf("Calling the second function (multiply)\n");
    multiply(a,b);
}
void multiply(float a,float b){
    float multiply = 0;
    multiply = a*b;
    printf("Result of the second function: %f \n",multiply);
    printf("Calling the third function (divide)\n");
    divide(a,b);
}
void divide(float a,float b){
    if (b==0)
    printf("Can't divide by 0\n");
    else
    printf("Result of the third function: %f",a/b);
}