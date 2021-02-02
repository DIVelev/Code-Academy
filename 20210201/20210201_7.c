#include <stdio.h>

/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна. */

unsigned int recursiveFunction(int a);

int main(void){

    printf("Result is: %d",recursiveFunction(30));

    return 0;
}

unsigned int recursiveFunction(int a){

    while(a>0){
        return a * recursiveFunction(a-1);
    }

    return 1;

}