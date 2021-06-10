#include <stdio.h>

/* Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията. */

float triangleArea(float a,float b);
float rectangleArea(float a,float b);

int main(void){

    float a,b,tArea = 0,rArea = 0;
    printf("Enter a value for a: \n");
    scanf("%f",&a);
    printf("Enter a value for b: \n");
    scanf("%f",&b);
    if (a<0 || b<0)
    printf("Wrong values. The vertices must be greater than 0 \n");
    tArea = triangleArea(a,b);
    printf("The triangle's area is: %f\n",tArea);
    rArea = rectangleArea(a,b);
    printf("The rectangle's area is: %f\n",rArea);

    return 0;
}

float triangleArea(float a,float b){

    return a*b/2;

}

float rectangleArea(float a,float b){

    float res = triangleArea(a,b);
    return res*2;
}