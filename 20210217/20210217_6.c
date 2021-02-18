#include <stdio.h>
#include <stdlib.h>
#define size 100

/*Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/

int main(void){

    char arr[size];
    int count,i;
    printf("Enter a string: \n");
    gets(arr);
    printf("Your string is: \n");
    puts(arr);

    i = 0;
    while(arr[i] != '\0'){
        if(arr[i] == 'a'){
            count++;
        }
        if(arr[i] == 9){
            if (arr[i+1] == 7){
                count++;
            }
        }
        i++;
    }

    printf("Character a is met %d times in your array!\n",count);

    return 0;
}