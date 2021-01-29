#include "f.h"

/*Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин. */

int main(void){

    int a,b,c,addResult = 0,incrResult = 0;
    printf("Enter a value for a: \n");
    scanf("%d",&a);
    printf("Enter a value for b: \n");
    scanf("%d",&b);
    printf("Enter a value for c: \n");
    scanf("%d",&c);
    addResult = add(a,b);
    incrResult = incr(c);
    printf("Result after using add function : %d\n",addResult);
    printf("Result after using incr function : %d\n",incrResult);

    return 0;
}