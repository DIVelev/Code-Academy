#include <stdio.h>
#include <stdlib.h>

/*Задача 9.
Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/

int fibonacci(int n);

int main(void){

    int number;
    printf("Enter the last number for Fibonacci's row:\n");
    scanf("%d",&number);
    printf("The sum of Fibonacci's row with number %d is: %d",number,fibonacci(number));

    return 0;
}

int fibonacci(int n){
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return (fibonacci(n-1) + fibonacci(n-2));
} 