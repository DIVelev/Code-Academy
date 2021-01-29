#include "f.h"

/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него. */

int main(void){

    unsigned int a,b;
    float c,d;
    int flag = 0;

    printf("Enter two positive decimal numbers: \n");
    scanf("%d %d",&a,&b);
    printf("Using the first function to calculate the LCM \n");
    printf("LCM of %d and %d is : %d\n",a,b,calculateLCM(a,b));

    printf("Enter a number to get the absolute value of it: \n");
    scanf("%f",&c);
    printf("The absolute value of %f is: %f\n",c,absoluteValue(c));
    
    printf("Enter a number to get the square root of it: \n");
    scanf("%f",&d);
    flag = squareRoot(d);
    if (flag == -1){
        printf("Your number is negative. Using the second function, we will get the absolute of the number\n");
        d = absoluteValue(d);
    }
    printf("Square root of %f is: %f",d,squareRoot(d));

    return 0;
}