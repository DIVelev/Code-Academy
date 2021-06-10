#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 1. Дефиниране и инициализация на обединение */

union tagUStruct{
    int i;
    float f;
    char text[32];
};

int main(void){

    union tagUStruct test = { 13 };
    printf("tagUStruct size is: %d\n",sizeof(test));
    printf("\nElements in tagUStruct: \n");
    printf("Integer: %d\n",test.i);
    printf("Float: %f\n",test.f);
    printf("Text: %s\n",test.text);

    return 0;
}