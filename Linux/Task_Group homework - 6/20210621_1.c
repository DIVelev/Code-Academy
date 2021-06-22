/* Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

char* generatePwd(char* arr,unsigned int sLetters,unsigned int cLetters,unsigned int symbols,unsigned int numbers);
void printArray(char* arr,unsigned int size);
char* shuffleArray(char* arr,unsigned int size);
void swap(char *a, char *b);
 
int main(int argc, char *argv[]){  
 
    if(argc > 5){
        exit(2);
    }
 
    srand(time(0));
    char *p;
    int smallLet = 0;
    int capitalLet = 0;
    int numbers = 0;
    int symbols = 0;
    errno = 0;
 
    long conv = strtol(argv[1], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(3);
    }
    else{
        smallLet = conv;
    }
 
    if (smallLet <= 0){
        exit(4);
    }
 
    conv = strtol(argv[2], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(5);
    }
    else{
        capitalLet = conv;
    }
 
    if (capitalLet <= 0){
        exit(6);
    }
 
    conv = strtol(argv[3], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(7);
    }
    else{
        numbers = conv;
    }
 
    if (numbers <= 0){
        exit(8);
    }
 
    conv = strtol(argv[4], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(9);
    }
    else{
        symbols = conv;
    }
 
    if (symbols <= 0){
        exit(10);
    }

    int passLen = smallLet + capitalLet + numbers + symbols;
    char arr[passLen],*array;
    array = arr;
 
    array = generatePwd(array,smallLet,capitalLet,symbols,numbers);
    printf("\nPassword before shuffling: \n");
    printArray(array,passLen);
    array = shuffleArray(array,passLen);
    printf("\nPassword after shuffling: \n");
    printArray(array,passLen);
    printf("\n");
 
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
