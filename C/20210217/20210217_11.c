#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*Задача 11.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.*/

char* generatePwd(char* arr,unsigned int sLetters,unsigned int cLetters,unsigned int symbols,unsigned int numbers);
void printArray(char* arr,unsigned int size);
char* shuffleArray(char* arr,unsigned int size);
void swap(char *a, char *b);

int main(void){

    unsigned int i,j,k,l,size = 0;
    printf("To generate a password enter the things below:\n");
    printf("Enter the number of small letters:\n");
    scanf("%u",&i);
    printf("Enter the number of capital letters:\n");
    scanf("%u",&j);
    printf("How much symbols would you like:\n");
    scanf("%u",&k);
    printf("How much numbers  would  you like:\n");
    scanf("%u",&l);

    size = i+j+k+l;

    char arr[size],*p;
    p = arr;
    p = generatePwd(p,i,j,k,l);
    printf("\nPassword before shuffling: \n");
    printArray(p,size);
    p = shuffleArray(p,size);
    printf("\nPassword after shuffling: \n");
    printArray(p,size);

    return 0;
}

char* generatePwd(char* arr,unsigned int sLetters,unsigned int cLetters,unsigned int symbols,unsigned int numbers){

    srand((unsigned)time(NULL));
    int k = 0;
    for(k=0;k<sLetters;k++){
        *(arr+k) = 'a' + (rand() % 26);
    }
    for(k;k<(cLetters + sLetters);k++){
        *(arr+k) = 'A' + (rand() % 26);
    }
    for(k;k<(symbols+cLetters+sLetters);k++){
        *(arr+k) = 33 + (rand() % 10);
    }
    for(k;k<(numbers+symbols+cLetters+sLetters);k++){
        *(arr+k) = '0' + (rand() % 10);
    }

    *(arr+k) = '\0';

    return arr;

}

void printArray(char* arr,unsigned int size){

    int i;
    for(i=0;i<size;i++){
        printf("%c",*(arr+i));
    }

}

char* shuffleArray(char* arr,unsigned int size){

   srand((unsigned)time(NULL));
   int i,j;
   for(i = size-1; i > 0; i--) {
        j = rand() % (i+1);
        swap(&arr[i], &arr[j]);
    }

    return arr;
}

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}