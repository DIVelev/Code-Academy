#include <stdio.h>
#include <stdlib.h>
#define prime 168
/*Задача 10.
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/

int* checkIfPrime();

int main(void){

    int *primeNumbers,i;
    primeNumbers = checkIfPrime();
    i = 0;
    while(i<prime){
        printf("%d\n",*(primeNumbers+i));
        i++;
    }

}

int* checkIfPrime(){

    int i,count,number = 2,j;
    static int arr[prime];

    j = 0;
    while(number<1000){
        count = 0;
        i = 2;
        while(i <= number / 2){
            if(number % i == 0){
                count++;
                break;
            }
            i++;
        }
        if(count == 0 && number != 1){
            arr[j] = number;
            j++;
        }
        number++;
    }

    return arr;
}