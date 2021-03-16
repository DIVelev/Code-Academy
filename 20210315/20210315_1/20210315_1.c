#include "20210315_1.h"

/*Задача 1
Използвайте динамична реализация на стек за въвеждане на поредица
от цели положителни числа и нейното извеждане върху екрана в
обратен ред. За край на поредицата от клавиатурата се въвежда 0*/

int main(void){

    init();
    unsigned int n = 1;
    while(n){
        printf("Enter a digit: \n");
        scanf("%u",&n);
        if(n == 0){
            break;
        }
        push(n);
    }

    while(pop(&n)){
        printf("%u\t",n);
    }

    return 0;
}