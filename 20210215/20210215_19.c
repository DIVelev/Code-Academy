#include <stdio.h>
#include <stdlib.h>

/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/

int main(void){

    char string[] = {"Baba, kaka, mama"};
    char *s = string;
    
    while(*s){
        if(*s == 'a'){
            *s = 'o';
        }
        s++;
    }

    puts(string);

    return 0;
}