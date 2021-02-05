#include <stdio.h>

/*Задача 21. Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет*/

void bubbleSortAWriteToB(const char a[], char b[]);

int main(void){

    int i;
    char s_letters[10];
    char letters[10] = {'a','r','p','b','r','c','x','d','e','j'};

    bubbleSortAWriteToB(letters, s_letters);

    for (i = 0; i < 10; i++){
        printf("%c\n", s_letters[i]);
    }

    return 0;
}

void bubbleSortAWriteToB(const char a[], char b[]){
    
    char temp;
    int i,j;

    for (i = 0; i < 10; i++){
        b[i] = a[i];
    }

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10 - 1; j++){
            if(b[j-1] > b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }   
    }
}