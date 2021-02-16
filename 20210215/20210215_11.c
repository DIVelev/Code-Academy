#include <stdio.h>
#include <stdlib.h>


/*Задача 11.
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/

int main(void){

    int a,b,*pA,*pB;
    printf("Enter a value for a:\n");
    scanf("%d",&a);
    printf("Enter a value for b:\n");
    scanf("%d",&b);
    pA = &a;
    pB = &b;
    printf("a * b = %d\n",(*pA * *pB));

    float f;
    printf("Enter a float number:\n");
    scanf("%lf",&f);
    float *pF = &f;
    printf("Pointer to integer a * Pointer to float f = %lf",(*pA * *pF)); // Не се получава, дори когато е с поинтър.

    return 0;
}